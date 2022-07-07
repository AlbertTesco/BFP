/********************************************************************************
** Form generated from reading UI file 'dialog_trapezoid.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TRAPEZOID_H
#define UI_DIALOG_TRAPEZOID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_trapezoid
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tab_rect;
    QGraphicsView *graphicsView;
    QTableWidget *table_ang;

    void setupUi(QDialog *Dialog_trapezoid)
    {
        if (Dialog_trapezoid->objectName().isEmpty())
            Dialog_trapezoid->setObjectName(QString::fromUtf8("Dialog_trapezoid"));
        Dialog_trapezoid->resize(1174, 639);
        Dialog_trapezoid->setStyleSheet(QString::fromUtf8("Dialog_trapezoid\n"
"{\n"
"background-color: #101223;\n"
"}\n"
"\n"
"QTableWidget::horizontalHeaderItem{\n"
"background-color: black;\n"
"}"));
        verticalLayout = new QVBoxLayout(Dialog_trapezoid);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tab_rect = new QTableWidget(Dialog_trapezoid);
        if (tab_rect->columnCount() < 7)
            tab_rect->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tab_rect->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tab_rect->rowCount() < 1)
            tab_rect->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tab_rect->setVerticalHeaderItem(0, __qtablewidgetitem7);
        tab_rect->setObjectName(QString::fromUtf8("tab_rect"));
        tab_rect->setEnabled(true);
        tab_rect->setMaximumSize(QSize(16777215, 52));
        tab_rect->setLayoutDirection(Qt::LeftToRight);
        tab_rect->setAutoFillBackground(false);
        tab_rect->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tab_rect->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tab_rect->setAutoScroll(true);
        tab_rect->setAutoScrollMargin(10);
        tab_rect->setDragEnabled(false);
        tab_rect->setAlternatingRowColors(false);
        tab_rect->horizontalHeader()->setVisible(true);
        tab_rect->horizontalHeader()->setCascadingSectionResizes(false);
        tab_rect->horizontalHeader()->setMinimumSectionSize(50);
        tab_rect->horizontalHeader()->setDefaultSectionSize(153);
        tab_rect->horizontalHeader()->setHighlightSections(false);
        tab_rect->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tab_rect->horizontalHeader()->setStretchLastSection(true);
        tab_rect->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tab_rect);

        graphicsView = new QGraphicsView(Dialog_trapezoid);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        table_ang = new QTableWidget(Dialog_trapezoid);
        if (table_ang->columnCount() < 4)
            table_ang->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_ang->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_ang->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_ang->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_ang->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        if (table_ang->rowCount() < 1)
            table_ang->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_ang->setVerticalHeaderItem(0, __qtablewidgetitem12);
        table_ang->setObjectName(QString::fromUtf8("table_ang"));
        table_ang->setMaximumSize(QSize(16777215, 52));
        table_ang->setAutoFillBackground(false);
        table_ang->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        table_ang->horizontalHeader()->setMinimumSectionSize(70);
        table_ang->horizontalHeader()->setDefaultSectionSize(266);
        table_ang->horizontalHeader()->setStretchLastSection(true);
        table_ang->verticalHeader()->setCascadingSectionResizes(false);
        table_ang->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_ang->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(table_ang);


        retranslateUi(Dialog_trapezoid);

        QMetaObject::connectSlotsByName(Dialog_trapezoid);
    } // setupUi

    void retranslateUi(QDialog *Dialog_trapezoid)
    {
        Dialog_trapezoid->setWindowTitle(QCoreApplication::translate("Dialog_trapezoid", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tab_rect->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\233\320\265\320\262\320\260\321\217 \321\201\321\202\320\276\321\200\320\276\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tab_rect->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\237\321\200\320\260\320\262\320\260\321\217 \321\201\321\202\320\276\321\200\320\276\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tab_rect->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\234\320\265\320\275\321\214\321\210\320\265\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tab_rect->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\221\320\276\320\273\321\214\321\210\320\265\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tab_rect->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tab_rect->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tab_rect->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tab_rect->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_ang->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\233\320\265\320\262\321\213\320\271 \320\275\320\270\320\266\320\275\320\270\320\271 \321\203\320\263\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_ang->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\233\320\265\320\262\321\213\320\271 \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\203\320\263\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_ang->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\237\321\200\320\260\320\262\321\213\320\271 \320\262\320\265\321\200\321\205\320\275\320\270\320\271 \321\203\320\263\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table_ang->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\237\321\200\320\260\320\262\321\213\320\271 \320\275\320\270\320\266\320\275\320\270\320\271 \321\203\320\263\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table_ang->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Dialog_trapezoid", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_trapezoid: public Ui_Dialog_trapezoid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TRAPEZOID_H
