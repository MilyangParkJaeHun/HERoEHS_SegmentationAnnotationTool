#include "InstanceSegmentationAnnotationTool.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    QGuiApplication::setWindowIcon(QIcon(":/logo"));
    
    connect(new QShortcut(QKeySequence(Qt::Key_Left),           this),  SIGNAL(activated()),    this,   SLOT(btn_prev_clicked()));
    connect(new QShortcut(QKeySequence(Qt::Key_Right),          this),  SIGNAL(activated()),    this,   SLOT(btn_next_clicked()));
	connect(new QShortcut(QKeySequence(Qt::Key_Up),				this),	SIGNAL(activated()),	this,	SLOT(btn_up_clicked()));
	connect(new QShortcut(QKeySequence(Qt::Key_Down),			this),	SIGNAL(activated()),	this,	SLOT(btn_down_clicked()));
    connect(new QShortcut(QKeySequence(Qt::Key_Space),          this),  SIGNAL(activated()),    this,   SLOT(btn_watershed_clicked()));
    connect(new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_S),   this),  SIGNAL(activated()),    this,   SLOT(btn_save_clicked()));
    connect(new QShortcut(QKeySequence(Qt::Key_Plus),           this),  SIGNAL(activated()),    this,   SLOT(btn_plus_clicked()));
    connect(new QShortcut(QKeySequence(Qt::Key_Minus),          this),  SIGNAL(activated()),    this,   SLOT(btn_minus_clicked()));
    connect(new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z),   this),  SIGNAL(activated()),    this,   SLOT(undo()));
    connect(new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Y),   this),  SIGNAL(activated()),    this,   SLOT(redo()));

	connect(new QShortcut(QKeySequence(Qt::Key_M),				this), SIGNAL(activated()),		this, SLOT(change_manual()));
	connect(new QShortcut(QKeySequence(Qt::Key_N),				this), SIGNAL(activated()),		this, SLOT(change_watershed()));
	connect(new QShortcut(QKeySequence(Qt::Key_P),				this), SIGNAL(activated()),		this, SLOT(btn_plus_clicked()));

    connect(ui->pushButton_prev,            SIGNAL(clicked()),              this,   SLOT(btn_prev_clicked()));
    connect(ui->pushButton_next,            SIGNAL(clicked()),              this,   SLOT(btn_next_clicked()));
    connect(ui->horizontalSlider_progress,  SIGNAL(valueChanged(int)),      this,   SLOT(slider_value_changed()));
    connect(ui->pushButton_watershed,       SIGNAL(clicked()),              this,   SLOT(btn_watershed_clicked()));
    connect(ui->pushButton_save,            SIGNAL(clicked()),              this,   SLOT(btn_save_clicked()));

    connect(ui->pushButton_img_dir,         SIGNAL(clicked()),              this,   SLOT(btn_img_dir_clicked()));
    connect(ui->pushButton_set_class,       SIGNAL(clicked()),              this,   SLOT(btn_set_class_clicked()));
    connect(ui->spinBox_pen_size,           SIGNAL(valueChanged(int)),      this,   SLOT(set_pen_size()));
    connect(ui->checkBox_manual_mask,       SIGNAL(clicked()),              this,   SLOT(change_visualize_mode()));
    connect(ui->checkBox_watershed_mask,    SIGNAL(clicked()),              this,   SLOT(change_visualize_mode()));
    connect(ui->checkBox_drawmode,          SIGNAL(clicked()),              this,   SLOT(change_visualize_mode()));
    connect(ui->checkBox_fill_color_mode,   SIGNAL(clicked()),              this,   SLOT(change_fill_color_mode()));
    connect(ui->pushButton_plus,            SIGNAL(clicked()),              this,   SLOT(btn_plus_clicked()));
    connect(ui->pushButton_minus,           SIGNAL(clicked()),              this,   SLOT(btn_minus_clicked()));
    connect(ui->hsv_set_button,             SIGNAL(clicked()),              this,   SLOT(hsv_set_clicked()));
    connect(ui->hsv_load_button,            SIGNAL(clicked()),              this,   SLOT(hsv_load_clicked()));
    connect(ui->h_lower_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(h_lower_slider_changed(int)));
    connect(ui->h_upper_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(h_upper_slider_changed(int)));
    connect(ui->s_lower_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(s_lower_slider_changed(int)));
    connect(ui->s_upper_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(s_upper_slider_changed(int)));
    connect(ui->v_lower_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(v_lower_slider_changed(int)));
    connect(ui->v_upper_slider,             SIGNAL(valueChanged(int)),      this,   SLOT(v_upper_slider_changed(int)));

    init();
}

MainWindow::~MainWindow() 
{
    delete ui;
}


void MainWindow::btn_prev_clicked()
{
    if (!init_parameter.is_init)
        return;
   
    if (canvas._effective_id.size() > 1 && !canvas._is_watershed)
    {
        btn_watershed_clicked();
        show_msgBox(QMessageBox::Warning, "Warning", "Please check the output.");
        return;
    }

    btn_save_clicked();

	if (canvas._imgIndex == 0) {
		show_msgBox(QMessageBox::Information, "First", "This is first image.");
		return;
	}

    canvas._imgIndex -= 1;
    canvas._imgFile = canvas._imgList[canvas._imgIndex];
    
    move_img();
}

void MainWindow::btn_next_clicked()
{
    if (!init_parameter.is_init)
        return;
  
    if (canvas._effective_id.size() > 1 && !canvas._is_watershed)
    {
        btn_watershed_clicked();
        show_msgBox(QMessageBox::Warning, "Warning", "Please check the output.");
        return;
    }

    btn_save_clicked();

	if (canvas._imgIndex == canvas._imgList.size() - 1) {
		show_msgBox(QMessageBox::Information, "End", "This is last image.");
		return;
	}

    canvas._imgIndex += 1;
    canvas._imgFile = canvas._imgList[canvas._imgIndex];

    move_img();
}

void MainWindow::btn_up_clicked()
{
	QTreeWidgetItem *item = ui->treeWidget_class->currentItem();
	
	if (item == NULL)
		return;
	
	QTreeWidgetItem *item_above = ui->treeWidget_class->itemAbove(item);
	
	if (item_above == NULL)
		return;

	ui->treeWidget_class->setCurrentItem(item_above);
	item_above->setSelected(true);
}

void MainWindow::btn_down_clicked()
{
	QTreeWidgetItem *item = ui->treeWidget_class->currentItem();

	if (item == NULL)
		return;

	QTreeWidgetItem *item_below = ui->treeWidget_class->itemBelow(item);

	if (item_below == NULL)
		return;
	ui->treeWidget_class->setCurrentItem(item_below);
	item_below->setSelected(true);
}

void MainWindow::slider_value_changed()
{
    if (!init_parameter.is_init)
        return;

    if (canvas._effective_id.size() > 0 && !canvas._is_watershed)
    {
        btn_watershed_clicked();
        show_msgBox(QMessageBox::Warning, "Warning", "Please check the output.");
        return;
    }
	if(init_parameter.is_set_dir)
		btn_save_clicked();

    canvas._imgIndex = ui->horizontalSlider_progress->value();
    canvas._imgFile = canvas._imgList[canvas._imgIndex];

    move_img();
}

void MainWindow::btn_watershed_clicked()
{    
    if (!init_parameter.is_init)
        return;

    canvas.run_watershed();
    update_img();
}

void MainWindow::btn_save_clicked()
{
    if (!init_parameter.is_init)
        return;

    canvas.save();
    
    //show_msgBox(QMessageBox::Information, "Save", "Data was saved");
}

void MainWindow::btn_img_dir_clicked()
{
    std::string selected_dir;
    if(!init_parameter.is_first_set_dir)
    {
        std::cout << "test" << std::endl;
        QString opened_dir = QFileDialog::getExistingDirectory(this, "Choose a directory to be read in", "./", QFileDialog::ShowDirsOnly);

    #if defined(LINUX_PLATFORM)
        selected_dir = opened_dir.toUtf8().constData();
    #elif defined(WINDOWS_PLATFORM)
        selected_dir = opened_dir.toLocal8Bit();
    #else
        selected_dir = opened_dir.toLocal8Bit();
    #endif
        file_write(_img_dir_config_file, selected_dir);
    }
    else
    {
        selected_dir = _img_dir_path;
    }
	
    std::vector<std::string> total_file_list;
    getFilelistRecursive(selected_dir, total_file_list);

    std::vector<std::string> img_file_list;
    getImgFilelist(total_file_list, img_file_list);
    sort(img_file_list.begin(), img_file_list.end(), compareFileName);

    if (img_file_list.size() == 0) 
    {
        show_msgBox(QMessageBox::Critical, "Error", "There are no images in that folder. Please choose another path.");
        return;
    }
    else
    {
        QStringList img_list;
		
        for (auto file : img_file_list)
            img_list << QString::fromLocal8Bit(file.c_str());

        canvas._imgList = img_list;
		canvas._imgIndex = 0;
        canvas._imgFile = canvas._imgList[canvas._imgIndex];

        ui->horizontalSlider_progress->tickPosition();
        ui->horizontalSlider_progress->setValue(canvas._imgIndex);
        ui->horizontalSlider_progress->setMaximum(img_file_list.size()-1);
        
        init_parameter.is_set_dir = true;
    }

    check_is_init();
}

void MainWindow::btn_set_class_clicked()
{
    std::string selected_file;
    if(!init_parameter.is_first_set_class)
    {
        QString opened_file = QFileDialog::getOpenFileName(nullptr, tr("Open LabelList file"), "./", tr("LabelList Files (*.txt *.names)"));

    #if defined(LINUX_PLATFORM)
        selected_file = opened_file.toUtf8().constData();
    #elif defined(WINDOWS_PLATFORM)
        selected_file = opened_file.toLocal8Bit();
    #else
        selected_file = opened_file.toLocal8Bit();
    #endif
        file_write(_class_config_file, selected_file);
    }
    else
    {
        selected_file = _class_file_path;
    }

    std::vector<std::string> class_names = readNamesFile(selected_file);

    if (class_names.size() == 0)
    {
        show_msgBox(QMessageBox::Critical, "Error", "There are no contents in that file. Please choose another file.");
        return;
    }        
    else
    {
        QStringList class_list;
        class_list << "Background";
        for (auto nane : class_names)
            class_list << QString::fromStdString(nane);
                    
        canvas._classList = class_list;
        
        init_parameter.is_set_class = true;
    }
    
    check_is_init();
}

void MainWindow::set_pen_size()
{
    if (!init_parameter.is_init)
        return;

    canvas._pen_size = ui->spinBox_pen_size->value();
}

void MainWindow::change_manual()
{
	if (!init_parameter.is_init)
		return;

	if (ui->checkBox_drawmode->isChecked())
		ui->checkBox_drawmode->setChecked(false);
	else
		ui->checkBox_drawmode->setChecked(true);

	change_visualize_mode();
}

void MainWindow::change_watershed()
{
	if (!init_parameter.is_init)
		return;

	if (ui->checkBox_watershed_mask->isChecked())
		ui->checkBox_watershed_mask->setChecked(false);
	else
		ui->checkBox_watershed_mask->setChecked(true);

	change_visualize_mode();
}

void  MainWindow::change_visualize_mode()
{
    if (!init_parameter.is_init)
        return;

    if (ui->checkBox_manual_mask->isChecked())
        canvas._display_manual_mask = true;
    else
        canvas._display_manual_mask = false;

    if (ui->checkBox_watershed_mask->isChecked())
        canvas._display_watershed_mask = true;
    else
        canvas._display_watershed_mask = false;

    if (ui->checkBox_drawmode->isChecked())
        canvas._draw_manual_mask = true;
    else
        canvas._draw_manual_mask = false;

    canvas.update_mask();
    update_img();
}

void MainWindow::change_fill_color_mode()
{
    if(ui->checkBox_fill_color_mode->isChecked())
        init_parameter.is_fill_color_mode = true;
    else
        init_parameter.is_fill_color_mode = false;
}

void MainWindow::btn_plus_clicked()
{
    if (!init_parameter.is_init)
        return;

    QTreeWidgetItem *item = ui->treeWidget_class->currentItem();
    if (item == NULL)
        return;

    QTreeWidgetItem *parent = item;
    if (parent->text(0) == "Background")
        return;
    
    while (parent->parent() != NULL)
        parent = parent->parent();

    ui->treeWidget_class->expandItem(parent);

    QTreeWidgetItem *child = new QTreeWidgetItem(parent);
    child->setFlags(child->flags() | Qt::ItemIsEditable);
    child->setText(1, QString::number(parent->childCount()));
    child->setTextAlignment(1, Qt::AlignCenter);
    child->setForeground(0, QColor(231, 230, 230));

    ui->treeWidget_class->setCurrentItem(child);
    child->setSelected(true);
}

void MainWindow::btn_minus_clicked()
{
    if (!init_parameter.is_init)
        return;

    QTreeWidgetItem *item = ui->treeWidget_class->currentItem();
    if (item == NULL)
        return;

    if (item->text(0) == "Background")
    {
        std::vector<int>::iterator it = std::find(canvas._effective_id.begin(), canvas._effective_id.end(), item->text(3).toInt());
        if (it != canvas._effective_id.end())
            canvas._effective_id.erase(it);

        canvas.update_mask();
        update_img();

        item->setText(3, "");

        for (int cnt = 0; cnt < canvas._id_storage.size(); cnt++)
        {
            auto _id = canvas._id_storage[cnt];

            if (_id.color == QColor(0, 0, 0))
            {
                canvas._id_storage.erase(canvas._id_storage.begin() + cnt);
                break;
            }
        }
    }

    if (item->parent() == NULL)
        return;

    QTreeWidgetItem *parent = item->parent();

    int child_idx = parent->indexOfChild(item);

    for (int idx = child_idx; idx < parent->childCount(); idx++)
    {
        QTreeWidgetItem *child = parent->child(idx);
        child->setText(1, QString::number(idx));

        if (idx == child_idx)
        {
            ui->treeWidget_class->setCurrentItem(child);
            child->setSelected(true);
        }

        if (child->text(3) == "")
            continue;
        else
        {
            canvas.changeID(child->text(3).toInt());
            child->setBackground(2, canvas._color.color);
        }
    }

    int removeIdx = item->text(3).toInt();

    std::vector<int>::iterator it = std::find(canvas._effective_id.begin(), canvas._effective_id.end(), removeIdx);
    if (it != canvas._effective_id.end())
        canvas._effective_id.erase(it);

    canvas.update_mask();
    update_img();

    parent->removeChild(item);
}

int MainWindow::get_current_id()
{
    QString class_name = "";
    if (ui->treeWidget_class->currentItem()->parent() == NULL)
    {
        if (ui->treeWidget_class->currentItem()->text(0) != "Background")
            return 0;
        else
            class_name = "Background";
    }

    if (class_name == "")
        class_name = ui->treeWidget_class->currentItem()->parent()->text(0);

    int id;
    if (ui->treeWidget_class->currentItem()->text(3) == "")
    {
        QColor color;
        canvas.createID(id,color,class_name);

        ui->treeWidget_class->currentItem()->setBackground(2, color);
        ui->treeWidget_class->currentItem()->setText(3, QString::number(id));
    }
    else
        id = ui->treeWidget_class->currentItem()->text(3).toInt();

    canvas.changeID(id);

    std::vector<int>::iterator it = std::find(canvas._effective_id.begin(), canvas._effective_id.end(), id);
    if (it == canvas._effective_id.end())
        canvas._effective_id.emplace_back(id);
    return id;
}

std::string MainWindow::get_class_name()
{
    QTreeWidgetItem *item = ui->treeWidget_class->currentItem();
    if(item == NULL){
        return "";
    }
    std::string class_name;

    QTreeWidgetItem *parent = item;
    if(parent->parent() == NULL)
    {
    #if defined(LINUX_PLATFORM)
        class_name = parent->text(0).toUtf8().constData();
    #elif defined(WINDOWS_PLATFORM)
        class_name = parent->text(0).toLocal8Bit();
    #else
        class_name = parent->text(0).toLocal8Bit();
    #endif
    }
    else
    {
    #if defined(LINUX_PLATFORM)
        class_name = parent->parent()->text(0).toUtf8().constData();
    #elif defined(WINDOWS_PLATFORM)
        class_name = parent->parent()->text(0).toLocal8Bit();
    #else
        class_name = parent->parent()->text(0).toLocal8Bit();
    #endif     
    }
    return class_name;
}

void MainWindow::hsv_set_clicked()
{
    canvas.resetImage();
    canvas.draw_hsv_mask();
    canvas.set_hsv(get_class_name());
    update_img();
}

void MainWindow::hsv_load_clicked()
{
    std::map<std::string, int> hsv = canvas.load_hsv(get_class_name());

    ui->h_lower_slider->setValue(hsv["H_lower"]);
    ui->h_upper_slider->setValue(hsv["H_upper"]);
    ui->s_lower_slider->setValue(hsv["S_lower"]);
    ui->s_upper_slider->setValue(hsv["S_upper"]);
    ui->v_lower_slider->setValue(hsv["V_lower"]);
    ui->v_upper_slider->setValue(hsv["V_upper"]);
}

void MainWindow::hsv_filter_changed()
{
    get_current_id();
    canvas.update_hsv_filter();

    update_img();
}

void MainWindow::h_lower_slider_changed(int value)
{
    canvas._hsv_filter["H_lower"] = value;
    hsv_filter_changed();
}

void MainWindow::h_upper_slider_changed(int value)
{
    canvas._hsv_filter["H_upper"] = value;
    hsv_filter_changed();
}

void MainWindow::s_lower_slider_changed(int value)
{
    canvas._hsv_filter["S_lower"] = value;
    hsv_filter_changed();
}

void MainWindow::s_upper_slider_changed(int value)
{
    canvas._hsv_filter["S_upper"] = value;
    hsv_filter_changed();
}

void MainWindow::v_lower_slider_changed(int value)
{
    canvas._hsv_filter["V_lower"] = value;
    hsv_filter_changed();
}

void MainWindow::v_upper_slider_changed(int value)
{
    canvas._hsv_filter["V_upper"] = value;
    hsv_filter_changed();
}

void MainWindow::undo()
{
    if (!init_parameter.is_init)
        return;

    if (canvas._undo_mask.size() == 0 || canvas._undo_watershed.size() == 0)
        return;
    
    if (canvas._undo_idx == 0)
        return;

    canvas._undo_idx -= 1;

    canvas._mask = canvas._undo_mask[canvas._undo_idx];
    canvas._watershed = canvas._undo_watershed[canvas._undo_idx];
    
    canvas.checkID();

    canvas.update_mask();
    update_img();

    if (canvas._undo_idx == 0)
    {
        canvas._undo_mask.emplace_back(canvas._mask);
        canvas._undo_watershed.emplace_back(canvas._watershed);
    }
}

void MainWindow::redo()
{
    if (!init_parameter.is_init)
        return;

    if (canvas._undo_mask.size() == 0 || canvas._undo_watershed.size() == 0)
        return;

    if (canvas._undo_idx == canvas._undo_mask.size() -1 || canvas._undo_idx == canvas._undo_watershed.size() - 1)
        return;

    canvas._undo_idx += 1;

    canvas._mask = canvas._undo_mask[canvas._undo_idx];
    canvas._watershed = canvas._undo_watershed[canvas._undo_idx];
    canvas.checkID();
    canvas.update_mask();
    update_img();
}

void MainWindow::init()
{
    init_parameter.is_set_dir = false;
    init_parameter.is_set_class = false;
    init_parameter.is_init = false;
    init_parameter.is_first_set_dir = true;
    init_parameter.is_first_set_class = true;
    init_parameter.is_fill_color_mode = false;

    QStringList column_name;
    column_name << "Class" << "No" << "Color" << "";

    ui->treeWidget_class->setColumnCount(4);
    ui->treeWidget_class->setHeaderLabels(column_name);
    
    ui->treeWidget_class->hideColumn(3);
    
    ui->treeWidget_class->setColumnWidth(0, 160);
    ui->treeWidget_class->setColumnWidth(1, 35);
    ui->treeWidget_class->setColumnWidth(2, 95);

    ui->spinBox_pen_size->setValue(canvas._pen_size);

    ui->checkBox_manual_mask->setChecked(true);
    ui->checkBox_watershed_mask->setChecked(true);

    QImage logo = QImage(":/logo");
    ui->label_img_display->setPixmap(QPixmap::fromImage(logo));

    _class_file_path = file_read(_class_config_file);
    _img_dir_path = file_read(_img_dir_config_file);
    if(_class_file_path != "ERROR")
    {
        btn_set_class_clicked();
    }
    std::cout << _img_dir_path << std::endl;
    if(_img_dir_path != "ERROR")
    {
        btn_img_dir_clicked();
    }
    init_parameter.is_first_set_class = false;
    init_parameter.is_first_set_dir = false;
}

void MainWindow::check_is_init()
{
    if (init_parameter.is_set_class && init_parameter.is_set_dir)
    {
        move_img();
        init_parameter.is_init = true;
    }
}

void MainWindow::set_class_tree()
{
    ui->treeWidget_class->clear();
    
    for (auto class_name : canvas._classList)
    {
        QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget_class);
        item->setText(0, class_name);

        if (class_name == "Background")
        {
            item->setText(0, class_name);
            item->setBackground(2, QColor(0, 0, 0));
            item->setForeground(3, QColor(231, 230, 230));

            ui->treeWidget_class->setCurrentItem(item);
            item->setSelected(true);
        }
    }
}

void MainWindow::update_id()
{
    for (auto _id : canvas._id_storage)
    {
        int id = _id.id.red();
        QColor color = _id.color;
        QString class_name = _id.class_name;

        QList<QTreeWidgetItem*> list = ui->treeWidget_class->findItems(QString::number(id), Qt::MatchContains | Qt::MatchRecursive, 3);
               
        if (list.size() == 0)
        {
            QList<QTreeWidgetItem*> parentList = ui->treeWidget_class->findItems(class_name, Qt::MatchContains | Qt::MatchRecursive, 0);

            for (int idx = 0; idx < parentList.size(); idx++)
            {
                QTreeWidgetItem *parent = parentList[idx];

                if (parent->text(0) != class_name)
                    continue;
                else
                {
                    if (class_name == "Background")
                    {
                        parent->setText(3, QString::number(id));
                        
                        ui->treeWidget_class->setCurrentItem(parent);
                        parent->setSelected(true);

                        canvas.changeID(id);
                    }
                    else
                    {
                        ui->treeWidget_class->expandItem(parent);

                        QTreeWidgetItem *child = new QTreeWidgetItem(parent);
                        child->setFlags(child->flags() | Qt::ItemIsEditable);
                        child->setText(1, QString::number(parent->childCount()));
                        child->setTextAlignment(1, Qt::AlignCenter);
                        child->setBackground(2, color);
                        child->setText(3, QString::number(id));
                        child->setForeground(3, QColor(231, 230, 230));

                        ui->treeWidget_class->setCurrentItem(child);
                        child->setSelected(true);

                        canvas.changeID(id);
                    }
                }
            }
        }
    }
}

void MainWindow::move_img()
{
    canvas._is_watershed = false;
    canvas._effective_id.clear();
    canvas._id_storage.clear();

    set_class_tree();

    ui->horizontalSlider_progress->blockSignals(true);
    ui->horizontalSlider_progress->setValue(canvas._imgIndex);
    ui->horizontalSlider_progress->blockSignals(false);

    ui->label_img_name->setText("[File] " + canvas._imgFile);
    ui->label_progress->setText(QString::number(canvas._imgIndex + 1) + " / " + QString::number(canvas._imgList.size()));

    canvas.readImage();
    canvas.clear_hsv();
    update_id();

    ui->label_img_display->setPixmap(QPixmap::fromImage(canvas._inputImg_display));
    ui->label_img_display->resize(QPixmap::fromImage(canvas._inputImg_display).width(), QPixmap::fromImage(canvas._inputImg_display).height());
}

void MainWindow::update_img()
{
    ui->label_img_display->setPixmap(QPixmap::fromImage(canvas._inputImg_display));
}

void MainWindow::show_msgBox(QMessageBox::Icon icon, QString title, QString content)
{   
    QMessageBox msgBox(icon, title, content, QMessageBox::Ok);

    QFont font;
    msgBox.setFont(font);
    msgBox.button(QMessageBox::Ok)->setFont(font);

    msgBox.exec();
}

void MainWindow::wheelEvent(QWheelEvent *ev)
{
    if (!init_parameter.is_init)
        return;

    if (ev->delta() > 0) // up Wheel
        btn_prev_clicked();
    else if (ev->delta() < 0) //down Wheel
        btn_next_clicked();
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if (!init_parameter.is_init)
        return;

    canvas._mouse_pos.setX(e->x());
    canvas._mouse_pos.setY(e->y());

    setFocus();
    QRect size = ui->label_img_display->geometry();

    if (e->x() >= size.x() && e->x() <= size.x() + size.width() && e->y() >= size.y() && e->y() <= size.y() + size.height() && e->button() == Qt::LeftButton)
    {
        QString class_name = "";
        if (ui->treeWidget_class->currentItem()->parent() == NULL)
        {
            if (ui->treeWidget_class->currentItem()->text(0) != "Background")
                return;
            else
                class_name = "Background";
        }

        if (class_name == "")
            class_name = ui->treeWidget_class->currentItem()->parent()->text(0);

        int id;
        if (ui->treeWidget_class->currentItem()->text(3) == "")
        {
            QColor color;
            canvas.createID(id,color,class_name);

            ui->treeWidget_class->currentItem()->setBackground(2, color);
            ui->treeWidget_class->currentItem()->setText(3, QString::number(id));

        }
        else
            id = ui->treeWidget_class->currentItem()->text(3).toInt();
        
        canvas.changeID(id);
        canvas._mouse_is_pressed = true;

        if(init_parameter.is_fill_color_mode)
            canvas.fill_color(size);
        else
            canvas.draw(e, size);

        std::vector<int>::iterator it = std::find(canvas._effective_id.begin(), canvas._effective_id.end(), id);
        if (it == canvas._effective_id.end())
            canvas._effective_id.emplace_back(id);

        update_img();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if (!init_parameter.is_init || init_parameter.is_fill_color_mode)
        return;

    canvas._mouse_pos.setX(e->x());
    canvas._mouse_pos.setY(e->y());

    QRect size = ui->label_img_display->geometry();
    
    canvas.changeID(ui->treeWidget_class->currentItem()->text(3).toInt());
    if (canvas._mouse_is_pressed)
        canvas.draw(e, size);
    
    update_img();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    if (!init_parameter.is_init)
        return;

    if (e->button() == Qt::LeftButton) 
    {
        canvas._mouse_is_pressed = false;
		
		canvas._undo_mask.erase(canvas._undo_mask.begin() + canvas._undo_idx+1, canvas._undo_mask.end());
		canvas._undo_mask.emplace_back(canvas._mask);

        canvas._undo_watershed.erase(canvas._undo_watershed.begin() + canvas._undo_idx+1, canvas._undo_watershed.end());
        canvas._undo_watershed.emplace_back(canvas._watershed);

		canvas._undo_idx++;
    }
}
