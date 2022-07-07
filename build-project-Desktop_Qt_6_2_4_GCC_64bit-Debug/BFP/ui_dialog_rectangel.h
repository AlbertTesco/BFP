/********************************************************************************
** Form generated from reading UI file 'dialog_rectangel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RECTANGEL_H
#define UI_DIALOG_RECTANGEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_rectangel
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tab_rect;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *Dialog_rectangel)
    {
        if (Dialog_rectangel->objectName().isEmpty())
            Dialog_rectangel->setObjectName(QString::fromUtf8("Dialog_rectangel"));
        Dialog_rectangel->resize(1117, 709);
        Dialog_rectangel->setStyleSheet(QString::fromUtf8("Dialog_rectangel\n"
"{\n"
"background-color: #101223;\n"
"}\n"
"\n"
"QTableWidget::horizontalHeaderItem{\n"
"background-color: black;\n"
"}"));
        verticalLayout = new QVBoxLayout(Dialog_rectangel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tab_rect = new QTableWidget(Dialog_rectangel);
        if (tab_rect->columnCount() < 2)
            tab_rect->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tab_rect->rowCount() < 1)
            tab_rect->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab_rect->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tab_rect->setObjectName(QString::fromUtf8("tab_rect"));
        tab_rect->setEnabled(true);
        tab_rect->setMaximumSize(QSize(16777215, 52));
        tab_rect->setLayoutDirection(Qt::LeftToRight);
        tab_rect->setAutoFillBackground(false);
        tab_rect->setAlternatingRowColors(false);
        tab_rect->horizontalHeader()->setVisible(true);
        tab_rect->horizontalHeader()->setCascadingSectionResizes(false);
        tab_rect->horizontalHeader()->setMinimumSectionSize(100);
        tab_rect->horizontalHeader()->setDefaultSectionSize(394);
        tab_rect->horizontalHeader()->setStretchLastSection(true);
        tab_rect->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tab_rect);

        graphicsView = new QGraphicsView(Dialog_rectangel);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(Dialog_rectangel);

        QMetaObject::connectSlotsByName(Dialog_rectangel);
    } // setupUi

    void retranslateUi(QDialog *Dialog_rectangel)
    {
        Dialog_rectangel->setWindowTitle(QCoreApplication::translate("Dialog_rectangel", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tab_rect->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog_rectangel", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tab_rect->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog_rectangel", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tab_rect->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog_rectangel", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_rectangel: public Ui_Dialog_rectangel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RECTANGEL_H
