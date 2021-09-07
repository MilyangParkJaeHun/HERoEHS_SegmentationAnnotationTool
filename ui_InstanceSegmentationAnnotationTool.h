/********************************************************************************
** Form generated from reading UI file 'InstanceSegmentationAnnotationTool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANCESEGMENTATIONANNOTATIONTOOL_H
#define UI_INSTANCESEGMENTATIONANNOTATIONTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_img_name;
    QLabel *label_img_display;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_prev;
    QPushButton *pushButton_next;
    QSlider *horizontalSlider_progress;
    QLabel *label_progress;
    QPushButton *pushButton_watershed;
    QPushButton *pushButton_save;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_img_dir;
    QPushButton *pushButton_set_class;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpinBox *spinBox_pen_size;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *checkBox_drawmode;
    QCheckBox *checkBox_fill_color_mode;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QCheckBox *checkBox_manual_mask;
    QCheckBox *checkBox_watershed_mask;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QTreeWidget *treeWidget_class;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QPushButton *hsv_set_button;
    QPushButton *hsv_load_button;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QVBoxLayout *verticalLayout_12;
    QSlider *h_lower_slider;
    QSlider *h_upper_slider;
    QSlider *s_lower_slider;
    QSlider *s_upper_slider;
    QSlider *v_lower_slider;
    QSlider *v_upper_slider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1944, 1193);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1402, 965));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_img_name = new QLabel(layoutWidget);
        label_img_name->setObjectName(QStringLiteral("label_img_name"));
        label_img_name->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_img_name->setFont(font);
        label_img_name->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_img_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_img_name);

        label_img_display = new QLabel(layoutWidget);
        label_img_display->setObjectName(QStringLiteral("label_img_display"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_img_display->sizePolicy().hasHeightForWidth());
        label_img_display->setSizePolicy(sizePolicy);
        label_img_display->setMinimumSize(QSize(1400, 900));
        label_img_display->setFont(font);
        label_img_display->setCursor(QCursor(Qt::CrossCursor));
        label_img_display->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_img_display->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_img_display);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_prev = new QPushButton(layoutWidget);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_prev->setFont(font1);
        pushButton_prev->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_prev);

        pushButton_next = new QPushButton(layoutWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setMaximumSize(QSize(16777215, 16777215));
        pushButton_next->setFont(font1);
        pushButton_next->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_next);

        horizontalSlider_progress = new QSlider(layoutWidget);
        horizontalSlider_progress->setObjectName(QStringLiteral("horizontalSlider_progress"));
        horizontalSlider_progress->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_progress);

        label_progress = new QLabel(layoutWidget);
        label_progress->setObjectName(QStringLiteral("label_progress"));
        label_progress->setMinimumSize(QSize(0, 0));
        label_progress->setMaximumSize(QSize(16777215, 16777215));
        label_progress->setFont(font1);
        label_progress->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_progress->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_progress);

        pushButton_watershed = new QPushButton(layoutWidget);
        pushButton_watershed->setObjectName(QStringLiteral("pushButton_watershed"));
        pushButton_watershed->setFont(font1);
        pushButton_watershed->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_watershed);

        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setFont(font1);
        pushButton_save->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1424, 16, 323, 941));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_img_dir = new QPushButton(widget);
        pushButton_img_dir->setObjectName(QStringLiteral("pushButton_img_dir"));
        pushButton_img_dir->setMaximumSize(QSize(16777215, 16777215));
        pushButton_img_dir->setFont(font1);
        pushButton_img_dir->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_5->addWidget(pushButton_img_dir);

        pushButton_set_class = new QPushButton(widget);
        pushButton_set_class->setObjectName(QStringLiteral("pushButton_set_class"));
        pushButton_set_class->setMaximumSize(QSize(16777215, 16777215));
        pushButton_set_class->setFont(font1);
        pushButton_set_class->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_5->addWidget(pushButton_set_class);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_4->addWidget(label);

        spinBox_pen_size = new QSpinBox(widget);
        spinBox_pen_size->setObjectName(QStringLiteral("spinBox_pen_size"));
        spinBox_pen_size->setMaximumSize(QSize(16777215, 16777215));
        spinBox_pen_size->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_4->addWidget(spinBox_pen_size);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(label_3);

        checkBox_drawmode = new QCheckBox(widget);
        checkBox_drawmode->setObjectName(QStringLiteral("checkBox_drawmode"));
        checkBox_drawmode->setFont(font1);
        checkBox_drawmode->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(checkBox_drawmode);

        checkBox_fill_color_mode = new QCheckBox(widget);
        checkBox_fill_color_mode->setObjectName(QStringLiteral("checkBox_fill_color_mode"));
        checkBox_fill_color_mode->setFont(font1);
        checkBox_fill_color_mode->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(checkBox_fill_color_mode);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(label_2);

        checkBox_manual_mask = new QCheckBox(widget);
        checkBox_manual_mask->setObjectName(QStringLiteral("checkBox_manual_mask"));
        checkBox_manual_mask->setFont(font1);
        checkBox_manual_mask->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(checkBox_manual_mask);

        checkBox_watershed_mask = new QCheckBox(widget);
        checkBox_watershed_mask->setObjectName(QStringLiteral("checkBox_watershed_mask"));
        checkBox_watershed_mask->setFont(font1);
        checkBox_watershed_mask->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(checkBox_watershed_mask);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(label_4);

        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(pushButton_plus);

        pushButton_minus = new QPushButton(widget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(pushButton_minus);


        verticalLayout_2->addLayout(horizontalLayout_8);

        treeWidget_class = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_class->setHeaderItem(__qtreewidgetitem);
        treeWidget_class->setObjectName(QStringLiteral("treeWidget_class"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget_class->sizePolicy().hasHeightForWidth());
        treeWidget_class->setSizePolicy(sizePolicy2);
        treeWidget_class->setFont(font1);
        treeWidget_class->setLayoutDirection(Qt::LeftToRight);
        treeWidget_class->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_2->addWidget(treeWidget_class);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout->addWidget(label_7);

        hsv_set_button = new QPushButton(widget);
        hsv_set_button->setObjectName(QStringLiteral("hsv_set_button"));

        horizontalLayout->addWidget(hsv_set_button);

        hsv_load_button = new QPushButton(widget);
        hsv_load_button->setObjectName(QStringLiteral("hsv_load_button"));

        horizontalLayout->addWidget(hsv_load_button);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_32 = new QLabel(widget);
        label_32->setObjectName(QStringLiteral("label_32"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy4);
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_32);

        label_33 = new QLabel(widget);
        label_33->setObjectName(QStringLiteral("label_33"));
        sizePolicy4.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy4);
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_33);

        label_34 = new QLabel(widget);
        label_34->setObjectName(QStringLiteral("label_34"));
        sizePolicy4.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy4);
        label_34->setFont(font1);
        label_34->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_34);

        label_35 = new QLabel(widget);
        label_35->setObjectName(QStringLiteral("label_35"));
        sizePolicy4.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy4);
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_35);

        label_36 = new QLabel(widget);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy4.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy4);
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_36);

        label_37 = new QLabel(widget);
        label_37->setObjectName(QStringLiteral("label_37"));
        sizePolicy4.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy4);
        label_37->setFont(font1);
        label_37->setStyleSheet(QLatin1String("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_37);


        horizontalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        h_lower_slider = new QSlider(widget);
        h_lower_slider->setObjectName(QStringLiteral("h_lower_slider"));
        h_lower_slider->setMaximum(255);
        h_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(h_lower_slider);

        h_upper_slider = new QSlider(widget);
        h_upper_slider->setObjectName(QStringLiteral("h_upper_slider"));
        h_upper_slider->setMaximum(255);
        h_upper_slider->setValue(255);
        h_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(h_upper_slider);

        s_lower_slider = new QSlider(widget);
        s_lower_slider->setObjectName(QStringLiteral("s_lower_slider"));
        s_lower_slider->setMaximum(255);
        s_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(s_lower_slider);

        s_upper_slider = new QSlider(widget);
        s_upper_slider->setObjectName(QStringLiteral("s_upper_slider"));
        s_upper_slider->setMaximum(255);
        s_upper_slider->setValue(255);
        s_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(s_upper_slider);

        v_lower_slider = new QSlider(widget);
        v_lower_slider->setObjectName(QStringLiteral("v_lower_slider"));
        v_lower_slider->setMaximum(255);
        v_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(v_lower_slider);

        v_upper_slider = new QSlider(widget);
        v_upper_slider->setObjectName(QStringLiteral("v_upper_slider"));
        v_upper_slider->setMaximum(255);
        v_upper_slider->setValue(255);
        v_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(v_upper_slider);


        horizontalLayout_12->addLayout(verticalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_12);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1944, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "InstanceSegmentationAnnotationTool 1.3 by KITECH AI Lab.", Q_NULLPTR));
        label_img_name->setText(QApplication::translate("MainWindow", "Press the buttons on the upper left corner to initialize", Q_NULLPTR));
        label_img_display->setText(QString());
        pushButton_prev->setText(QApplication::translate("MainWindow", "Previous", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        label_progress->setText(QApplication::translate("MainWindow", "0 / 0", Q_NULLPTR));
        pushButton_watershed->setText(QApplication::translate("MainWindow", "Watershed", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_img_dir->setText(QApplication::translate("MainWindow", "Set image directory", Q_NULLPTR));
        pushButton_set_class->setText(QApplication::translate("MainWindow", "Set class", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Circle size:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Draw mode", Q_NULLPTR));
        checkBox_drawmode->setText(QApplication::translate("MainWindow", "manual", Q_NULLPTR));
        checkBox_fill_color_mode->setText(QApplication::translate("MainWindow", "fill color", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Visualize", Q_NULLPTR));
        checkBox_manual_mask->setText(QApplication::translate("MainWindow", "manual mask", Q_NULLPTR));
        checkBox_watershed_mask->setText(QApplication::translate("MainWindow", "watershed mask", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Change # of  object", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "HSV_filter", Q_NULLPTR));
        hsv_set_button->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        hsv_load_button->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "H_lower", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "H_upper", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "S_lower", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "S_upper", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "V_lower", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "V_upper", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANCESEGMENTATIONANNOTATIONTOOL_H
