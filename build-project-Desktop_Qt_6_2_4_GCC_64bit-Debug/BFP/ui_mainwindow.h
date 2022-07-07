/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButtonCircle;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QGraphicsView *gr_circle;
    QWidget *tab_2;
    QLabel *label_4;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_6;
    QPushButton *pushButton;
    QGraphicsView *gr_rect;
    QWidget *tab_3;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QDoubleSpinBox *footing2;
    QDoubleSpinBox *footing1;
    QDoubleSpinBox *side1;
    QDoubleSpinBox *side2;
    QLabel *f_text1;
    QLabel *f_text2;
    QLabel *s_text1;
    QLabel *s_text2;
    QPushButton *btn_trap;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cmbChoise;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *gr_trap;
    QWidget *tab_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *cmbBox2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QGraphicsView *gr_par;
    QWidget *tab_5;
    QLabel *label_13;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_9;
    QPushButton *pushButton_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QComboBox *cmbBox3;
    QGraphicsView *gr_tri;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow\n"
"{\n"
"background-color: #101223;\n"
"}\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"QPushButton{\n"
"background-color: #e31539;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}\n"
"QPushButton::hover{\n"
"background-color: #ff3358;\n"
"}\n"
"QComboBox{\n"
"background: #9496a1;\n"
"border-radius: 8px;\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"  color: white;	\n"
"  background-color: #9496a1;\n"
"  padding: 10px;\n"
"  selection-background-color:#9496a1;\n"
"border-radius: 10px;\n"
"}\n"
"QGraphicsView{\n"
"border-radius: 50px;\n"
"background: white;\n"
"}\n"
"QMessageBox QLabel{\n"
"color: black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabletTracking(false);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{\n"
"border: 1px;\n"
"}\n"
"QTabBar::tab{\n"
"background: #5b5d6b;\n"
"margin-left: 8px;\n"
"min-width: 26px;\n"
"min-height: 8px;\n"
"left: -3px;\n"
"color: white;\n"
"border-radius: 8px;\n"
"padding: 3px;\n"
"}\n"
"\n"
"QTabBar::tab::selected{\n"
"background:  #282a3a;\n"
"}\n"
"QTabBar::tab::hover{\n"
"background:  rgb(56, 62, 73);\n"
"}"));
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButtonCircle = new QPushButton(tab);
        pushButtonCircle->setObjectName(QString::fromUtf8("pushButtonCircle"));
        pushButtonCircle->setGeometry(QRect(180, 150, 89, 25));
        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(80, 90, 286, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_4);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMaximum(450.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox);

        gr_circle = new QGraphicsView(tab);
        gr_circle->setObjectName(QString::fromUtf8("gr_circle"));
        gr_circle->setGeometry(QRect(480, 10, 331, 311));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 80, 221, 16));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(90, 110, 211, 61));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximum(450.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMaximum(450.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_3);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 180, 89, 25));
        gr_rect = new QGraphicsView(tab_2);
        gr_rect->setObjectName(QString::fromUtf8("gr_rect"));
        gr_rect->setGeometry(QRect(480, 10, 331, 311));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 100, 361, 20));
        label_3->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(tab_3);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 140, 231, 120));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        footing2 = new QDoubleSpinBox(formLayoutWidget);
        footing2->setObjectName(QString::fromUtf8("footing2"));
        footing2->setMinimum(0.000000000000000);
        footing2->setMaximum(400.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, footing2);

        footing1 = new QDoubleSpinBox(formLayoutWidget);
        footing1->setObjectName(QString::fromUtf8("footing1"));
        footing1->setMinimum(0.000000000000000);
        footing1->setMaximum(400.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, footing1);

        side1 = new QDoubleSpinBox(formLayoutWidget);
        side1->setObjectName(QString::fromUtf8("side1"));
        side1->setMinimum(0.000000000000000);
        side1->setMaximum(400.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, side1);

        side2 = new QDoubleSpinBox(formLayoutWidget);
        side2->setObjectName(QString::fromUtf8("side2"));
        side2->setMinimum(0.000000000000000);
        side2->setMaximum(400.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, side2);

        f_text1 = new QLabel(formLayoutWidget);
        f_text1->setObjectName(QString::fromUtf8("f_text1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, f_text1);

        f_text2 = new QLabel(formLayoutWidget);
        f_text2->setObjectName(QString::fromUtf8("f_text2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, f_text2);

        s_text1 = new QLabel(formLayoutWidget);
        s_text1->setObjectName(QString::fromUtf8("s_text1"));

        formLayout->setWidget(2, QFormLayout::LabelRole, s_text1);

        s_text2 = new QLabel(formLayoutWidget);
        s_text2->setObjectName(QString::fromUtf8("s_text2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, s_text2);

        btn_trap = new QPushButton(tab_3);
        btn_trap->setObjectName(QString::fromUtf8("btn_trap"));
        btn_trap->setGeometry(QRect(200, 290, 89, 25));
        horizontalLayoutWidget_2 = new QWidget(tab_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 20, 380, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        cmbChoise = new QComboBox(horizontalLayoutWidget_2);
        cmbChoise->addItem(QString());
        cmbChoise->addItem(QString());
        cmbChoise->addItem(QString());
        cmbChoise->setObjectName(QString::fromUtf8("cmbChoise"));
        cmbChoise->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbChoise->sizePolicy().hasHeightForWidth());
        cmbChoise->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(cmbChoise);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gr_trap = new QGraphicsView(tab_3);
        gr_trap->setObjectName(QString::fromUtf8("gr_trap"));
        gr_trap->setGeometry(QRect(480, 10, 331, 311));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        horizontalLayoutWidget = new QWidget(tab_4);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 50, 318, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(label_7);

        cmbBox2 = new QComboBox(horizontalLayoutWidget);
        cmbBox2->addItem(QString());
        cmbBox2->addItem(QString());
        cmbBox2->setObjectName(QString::fromUtf8("cmbBox2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbBox2->sizePolicy().hasHeightForWidth());
        cmbBox2->setSizePolicy(sizePolicy2);
        cmbBox2->setMinimumSize(QSize(157, 0));
        cmbBox2->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(cmbBox2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        formLayoutWidget_3 = new QWidget(tab_4);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(120, 140, 241, 89));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        doubleSpinBox_4 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMaximum(300.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_4);

        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        doubleSpinBox_5 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setMaximum(300.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_5);

        label_10 = new QLabel(formLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        doubleSpinBox_6 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setMaximum(300.000000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_6);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 110, 431, 20));
        label_11->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 250, 89, 25));
        gr_par = new QGraphicsView(tab_4);
        gr_par->setObjectName(QString::fromUtf8("gr_par"));
        gr_par->setGeometry(QRect(480, 10, 331, 311));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setEnabled(true);
        label_13->setGeometry(QRect(60, 100, 351, 20));
        label_13->setAlignment(Qt::AlignCenter);
        formLayoutWidget_5 = new QWidget(tab_5);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(130, 130, 211, 91));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(formLayoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_14);

        doubleSpinBox_7 = new QDoubleSpinBox(formLayoutWidget_5);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setMaximum(500.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_7);

        label_15 = new QLabel(formLayoutWidget_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_15);

        doubleSpinBox_8 = new QDoubleSpinBox(formLayoutWidget_5);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setMaximum(500.000000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_8);

        label_16 = new QLabel(formLayoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

        doubleSpinBox_9 = new QDoubleSpinBox(formLayoutWidget_5);
        doubleSpinBox_9->setObjectName(QString::fromUtf8("doubleSpinBox_9"));
        doubleSpinBox_9->setMaximum(500.000000000000000);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_9);

        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 240, 89, 25));
        horizontalLayoutWidget_3 = new QWidget(tab_5);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 60, 381, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(label_12);

        cmbBox3 = new QComboBox(horizontalLayoutWidget_3);
        cmbBox3->addItem(QString());
        cmbBox3->addItem(QString());
        cmbBox3->addItem(QString());
        cmbBox3->addItem(QString());
        cmbBox3->setObjectName(QString::fromUtf8("cmbBox3"));
        sizePolicy.setHeightForWidth(cmbBox3->sizePolicy().hasHeightForWidth());
        cmbBox3->setSizePolicy(sizePolicy);
        cmbBox3->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_4->addWidget(cmbBox3);

        gr_tri = new QGraphicsView(tab_5);
        gr_tri->setObjectName(QString::fromUtf8("gr_tri"));
        gr_tri->setGeometry(QRect(480, 10, 331, 311));
        gr_tri->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonCircle->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\210\320\270\321\200\320\270\320\275\321\203 \320\270 \320\264\320\273\320\270\320\275\321\203 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\321\201\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213:", nullptr));
        f_text1->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\214\321\210\320\265\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        f_text2->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\321\214\321\210\320\265\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        s_text1->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\272\320\276\320\262\320\260\321\217 \321\201\321\202\320\276\321\200\320\276\320\275\320\260", nullptr));
        s_text2->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\272\320\276\320\262\320\260\321\217 \321\201\321\202\320\276\321\200\320\276\320\275\320\260", nullptr));
        btn_trap->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\270:", nullptr));
        cmbChoise->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\260\321\217 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));
        cmbChoise->setItemText(1, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\262\320\275\320\276\320\261\320\265\320\264\321\200\320\265\320\275\320\275\320\260\321\217 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));
        cmbChoise->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\260\321\217 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\270:", nullptr));
        cmbBox2->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \320\262\321\213\321\201\320\276\321\202\320\260", nullptr));
        cmbBox2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \321\203\320\263\320\276\320\273", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 a", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 b", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 h<sub>b</sub>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \320\262\321\213\321\201\320\276\321\202\321\203:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\262\321\201\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 <b>a</b>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 <b>b</b>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 <b>c</b>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\270:", nullptr));
        cmbBox3->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\262\321\201\320\265\320\274 \321\201\321\202\320\276\321\200\320\276\320\275\320\260\320\274", nullptr));
        cmbBox3->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 \320\270 \320\262\321\213\321\201\320\276\321\202\320\260(\321\200\320\260\320\262\320\275\320\276\320\261.)", nullptr));
        cmbBox3->setItemText(2, QCoreApplication::translate("MainWindow", "\320\223\320\270\320\277\320\276\321\202\320\265\320\275\321\203\320\267\320\260 \320\270 \320\272\320\260\321\202\320\265\321\202", nullptr));
        cmbBox3->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\201\321\202\320\276\321\200\320\276\320\275\320\265 \320\270 \320\264\320\262\321\203\320\274 \321\203\320\263\320\273\320\260\320\274", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
