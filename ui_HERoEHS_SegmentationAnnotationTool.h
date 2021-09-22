/********************************************************************************
** Form generated from reading UI file 'HERoEHS_SegmentationAnnotationTool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEROEHS_SEGMENTATIONANNOTATIONTOOL_H
#define UI_HEROEHS_SEGMENTATIONANNOTATIONTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1944, 1193);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_img_name = new QLabel(centralWidget);
        label_img_name->setObjectName(QString::fromUtf8("label_img_name"));
        label_img_name->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_img_name->setFont(font);
        label_img_name->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_img_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_img_name);

        label_img_display = new QLabel(centralWidget);
        label_img_display->setObjectName(QString::fromUtf8("label_img_display"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_img_display->sizePolicy().hasHeightForWidth());
        label_img_display->setSizePolicy(sizePolicy);
        label_img_display->setMinimumSize(QSize(1400, 900));
        label_img_display->setFont(font);
        label_img_display->setCursor(QCursor(Qt::CrossCursor));
        label_img_display->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_img_display->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_img_display);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_prev = new QPushButton(centralWidget);
        pushButton_prev->setObjectName(QString::fromUtf8("pushButton_prev"));
        pushButton_prev->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_prev->setFont(font1);
        pushButton_prev->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_prev);

        pushButton_next = new QPushButton(centralWidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setMaximumSize(QSize(16777215, 16777215));
        pushButton_next->setFont(font1);
        pushButton_next->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_next);

        horizontalSlider_progress = new QSlider(centralWidget);
        horizontalSlider_progress->setObjectName(QString::fromUtf8("horizontalSlider_progress"));
        horizontalSlider_progress->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_progress);

        label_progress = new QLabel(centralWidget);
        label_progress->setObjectName(QString::fromUtf8("label_progress"));
        label_progress->setMinimumSize(QSize(0, 0));
        label_progress->setMaximumSize(QSize(16777215, 16777215));
        label_progress->setFont(font1);
        label_progress->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));
        label_progress->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_progress);

        pushButton_watershed = new QPushButton(centralWidget);
        pushButton_watershed->setObjectName(QString::fromUtf8("pushButton_watershed"));
        pushButton_watershed->setFont(font1);
        pushButton_watershed->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_watershed);

        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setFont(font1);
        pushButton_save->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);;\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_2->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_img_dir = new QPushButton(centralWidget);
        pushButton_img_dir->setObjectName(QString::fromUtf8("pushButton_img_dir"));
        pushButton_img_dir->setMaximumSize(QSize(16777215, 16777215));
        pushButton_img_dir->setFont(font1);
        pushButton_img_dir->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_5->addWidget(pushButton_img_dir);

        pushButton_set_class = new QPushButton(centralWidget);
        pushButton_set_class->setObjectName(QString::fromUtf8("pushButton_set_class"));
        pushButton_set_class->setMaximumSize(QSize(16777215, 16777215));
        pushButton_set_class->setFont(font1);
        pushButton_set_class->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_5->addWidget(pushButton_set_class);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_4->addWidget(label);

        spinBox_pen_size = new QSpinBox(centralWidget);
        spinBox_pen_size->setObjectName(QString::fromUtf8("spinBox_pen_size"));
        spinBox_pen_size->setMaximumSize(QSize(16777215, 16777215));
        spinBox_pen_size->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_4->addWidget(spinBox_pen_size);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(label_3);

        checkBox_drawmode = new QCheckBox(centralWidget);
        checkBox_drawmode->setObjectName(QString::fromUtf8("checkBox_drawmode"));
        checkBox_drawmode->setFont(font1);
        checkBox_drawmode->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(checkBox_drawmode);

        checkBox_fill_color_mode = new QCheckBox(centralWidget);
        checkBox_fill_color_mode->setObjectName(QString::fromUtf8("checkBox_fill_color_mode"));
        checkBox_fill_color_mode->setFont(font1);
        checkBox_fill_color_mode->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_3->addWidget(checkBox_fill_color_mode);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(label_2);

        checkBox_manual_mask = new QCheckBox(centralWidget);
        checkBox_manual_mask->setObjectName(QString::fromUtf8("checkBox_manual_mask"));
        checkBox_manual_mask->setFont(font1);
        checkBox_manual_mask->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(checkBox_manual_mask);

        checkBox_watershed_mask = new QCheckBox(centralWidget);
        checkBox_watershed_mask->setObjectName(QString::fromUtf8("checkBox_watershed_mask"));
        checkBox_watershed_mask->setFont(font1);
        checkBox_watershed_mask->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_6->addWidget(checkBox_watershed_mask);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(label_4);

        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(pushButton_plus);

        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout_8->addWidget(pushButton_minus);


        verticalLayout_2->addLayout(horizontalLayout_8);

        treeWidget_class = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget_class->setHeaderItem(__qtreewidgetitem);
        treeWidget_class->setObjectName(QString::fromUtf8("treeWidget_class"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget_class->sizePolicy().hasHeightForWidth());
        treeWidget_class->setSizePolicy(sizePolicy2);
        treeWidget_class->setFont(font1);
        treeWidget_class->setLayoutDirection(Qt::LeftToRight);
        treeWidget_class->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_2->addWidget(treeWidget_class);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        horizontalLayout->addWidget(label_7);

        hsv_set_button = new QPushButton(centralWidget);
        hsv_set_button->setObjectName(QString::fromUtf8("hsv_set_button"));

        horizontalLayout->addWidget(hsv_set_button);

        hsv_load_button = new QPushButton(centralWidget);
        hsv_load_button->setObjectName(QString::fromUtf8("hsv_load_button"));

        horizontalLayout->addWidget(hsv_load_button);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy4);
        label_32->setFont(font1);
        label_32->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_32);

        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy4.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy4);
        label_33->setFont(font1);
        label_33->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_33);

        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy4.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy4);
        label_34->setFont(font1);
        label_34->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_34);

        label_35 = new QLabel(centralWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy4.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy4);
        label_35->setFont(font1);
        label_35->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_35);

        label_36 = new QLabel(centralWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy4.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy4);
        label_36->setFont(font1);
        label_36->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_36);

        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy4.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy4);
        label_37->setFont(font1);
        label_37->setStyleSheet(QString::fromUtf8("background-color : rgb(231, 230, 230);color : rgb(0, 0, 0);\n"
"border-color: rgb(208, 206, 206);"));

        verticalLayout_11->addWidget(label_37);


        horizontalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        h_lower_slider = new QSlider(centralWidget);
        h_lower_slider->setObjectName(QString::fromUtf8("h_lower_slider"));
        h_lower_slider->setMaximum(255);
        h_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(h_lower_slider);

        h_upper_slider = new QSlider(centralWidget);
        h_upper_slider->setObjectName(QString::fromUtf8("h_upper_slider"));
        h_upper_slider->setMaximum(255);
        h_upper_slider->setValue(255);
        h_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(h_upper_slider);

        s_lower_slider = new QSlider(centralWidget);
        s_lower_slider->setObjectName(QString::fromUtf8("s_lower_slider"));
        s_lower_slider->setMaximum(255);
        s_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(s_lower_slider);

        s_upper_slider = new QSlider(centralWidget);
        s_upper_slider->setObjectName(QString::fromUtf8("s_upper_slider"));
        s_upper_slider->setMaximum(255);
        s_upper_slider->setValue(255);
        s_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(s_upper_slider);

        v_lower_slider = new QSlider(centralWidget);
        v_lower_slider->setObjectName(QString::fromUtf8("v_lower_slider"));
        v_lower_slider->setMaximum(255);
        v_lower_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(v_lower_slider);

        v_upper_slider = new QSlider(centralWidget);
        v_upper_slider->setObjectName(QString::fromUtf8("v_upper_slider"));
        v_upper_slider->setMaximum(255);
        v_upper_slider->setValue(255);
        v_upper_slider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(v_upper_slider);


        horizontalLayout_12->addLayout(verticalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_12);


        horizontalLayout_7->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1944, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Segmentation Annotation Tool for HERoEHS.", nullptr));
        label_img_name->setText(QApplication::translate("MainWindow", "Please load image directory and class file! See the buttons on the top right corner.", nullptr));
        label_img_display->setText(QString());
        pushButton_prev->setText(QApplication::translate("MainWindow", "Previous", nullptr));
        pushButton_next->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_progress->setText(QApplication::translate("MainWindow", "0 / 0", nullptr));
        pushButton_watershed->setText(QApplication::translate("MainWindow", "Watershed", nullptr));
        pushButton_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        pushButton_img_dir->setText(QApplication::translate("MainWindow", "Set image directory", nullptr));
        pushButton_set_class->setText(QApplication::translate("MainWindow", "Set class", nullptr));
        label->setText(QApplication::translate("MainWindow", "Circle size:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Draw mode", nullptr));
        checkBox_drawmode->setText(QApplication::translate("MainWindow", "manual", nullptr));
        checkBox_fill_color_mode->setText(QApplication::translate("MainWindow", "fill color", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Visualize", nullptr));
        checkBox_manual_mask->setText(QApplication::translate("MainWindow", "manual mask", nullptr));
        checkBox_watershed_mask->setText(QApplication::translate("MainWindow", "watershed mask", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Change # of object", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "HSV_filter", nullptr));
        hsv_set_button->setText(QApplication::translate("MainWindow", "Set", nullptr));
        hsv_load_button->setText(QApplication::translate("MainWindow", "Load", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "H_lower", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "H_upper", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "S_lower", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "S_upper", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "V_lower", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "V_upper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEROEHS_SEGMENTATIONANNOTATIONTOOL_H
