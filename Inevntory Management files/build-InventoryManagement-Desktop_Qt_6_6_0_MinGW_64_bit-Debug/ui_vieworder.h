/********************************************************************************
** Form generated from reading UI file 'vieworder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWORDER_H
#define UI_VIEWORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_viewOrder
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *viewOrder)
    {
        if (viewOrder->objectName().isEmpty())
            viewOrder->setObjectName("viewOrder");
        viewOrder->resize(614, 418);
        verticalLayout = new QVBoxLayout(viewOrder);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(viewOrder);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(viewOrder);

        QMetaObject::connectSlotsByName(viewOrder);
    } // setupUi

    void retranslateUi(QDialog *viewOrder)
    {
        viewOrder->setWindowTitle(QCoreApplication::translate("viewOrder", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewOrder: public Ui_viewOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWORDER_H
