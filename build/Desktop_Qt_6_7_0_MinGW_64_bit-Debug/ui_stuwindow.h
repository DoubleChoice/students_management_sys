/********************************************************************************
** Form generated from reading UI file 'stuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUWINDOW_H
#define UI_STUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuWindow
{
public:
    QTableView *tableView;
    QLabel *usernamelabel;
    QPushButton *pushButton;

    void setupUi(QWidget *StuWindow)
    {
        if (StuWindow->objectName().isEmpty())
            StuWindow->setObjectName("StuWindow");
        StuWindow->resize(788, 463);
        tableView = new QTableView(StuWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 80, 761, 361));
        usernamelabel = new QLabel(StuWindow);
        usernamelabel->setObjectName("usernamelabel");
        usernamelabel->setGeometry(QRect(10, 10, 151, 16));
        pushButton = new QPushButton(StuWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 10, 61, 23));

        retranslateUi(StuWindow);

        QMetaObject::connectSlotsByName(StuWindow);
    } // setupUi

    void retranslateUi(QWidget *StuWindow)
    {
        StuWindow->setWindowTitle(QCoreApplication::translate("StuWindow", "Form", nullptr));
        usernamelabel->setText(QCoreApplication::translate("StuWindow", "xxxxxx", nullptr));
        pushButton->setText(QCoreApplication::translate("StuWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuWindow: public Ui_StuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUWINDOW_H
