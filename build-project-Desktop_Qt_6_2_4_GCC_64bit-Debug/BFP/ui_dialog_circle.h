/********************************************************************************
** Form generated from reading UI file 'dialog_circle.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CIRCLE_H
#define UI_DIALOG_CIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_circle
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QGraphicsView *graph_circle;

    void setupUi(QDialog *Dialog_circle)
    {
        if (Dialog_circle->objectName().isEmpty())
            Dialog_circle->setObjectName(QString::fromUtf8("Dialog_circle"));
        Dialog_circle->resize(922, 690);
        Dialog_circle->setStyleSheet(QString::fromUtf8("Dialog_circle\n"
"{\n"
"background-color: #101223;\n"
"}\n"
"\n"
"QTableWidget::horizontalHeaderItem{\n"
"background-color: black;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Dialog_circle);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(Dialog_circle);
        if (table->columnCount() < 4)
            table->setColumnCount(4);
        QFont font;
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (table->rowCount() < 1)
            table->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setItem(0, 0, __qtablewidgetitem5);
        table->setObjectName(QString::fromUtf8("table"));
        table->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->setMaximumSize(QSize(900, 52));
        table->setFocusPolicy(Qt::StrongFocus);
        table->setAutoFillBackground(false);
        table->setStyleSheet(QString::fromUtf8(""));
        table->setAutoScroll(false);
        table->setShowGrid(true);
        table->setGridStyle(Qt::SolidLine);
        table->setSortingEnabled(true);
        table->setWordWrap(true);
        table->setCornerButtonEnabled(true);
        table->horizontalHeader()->setVisible(true);
        table->horizontalHeader()->setCascadingSectionResizes(false);
        table->horizontalHeader()->setMinimumSectionSize(80);
        table->horizontalHeader()->setDefaultSectionSize(200);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(true);
        table->verticalHeader()->setCascadingSectionResizes(false);
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        table->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(table);

        graph_circle = new QGraphicsView(Dialog_circle);
        graph_circle->setObjectName(QString::fromUtf8("graph_circle"));
        sizePolicy.setHeightForWidth(graph_circle->sizePolicy().hasHeightForWidth());
        graph_circle->setSizePolicy(sizePolicy);
        graph_circle->setMaximumSize(QSize(16777112, 16777215));
        graph_circle->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(graph_circle);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog_circle);

        QMetaObject::connectSlotsByName(Dialog_circle);
    } // setupUi

    void retranslateUi(QDialog *Dialog_circle)
    {
        Dialog_circle->setWindowTitle(QCoreApplication::translate("Dialog_circle", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog_circle", "\320\224\320\273\320\270\320\275\320\260 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog_circle", "\320\240\320\260\320\264\320\270\321\203\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog_circle", "\320\224\320\270\320\260\320\274\320\265\321\202\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog_circle", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialog_circle", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));

        const bool __sortingEnabled = table->isSortingEnabled();
        table->setSortingEnabled(false);
        table->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Dialog_circle: public Ui_Dialog_circle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CIRCLE_H
