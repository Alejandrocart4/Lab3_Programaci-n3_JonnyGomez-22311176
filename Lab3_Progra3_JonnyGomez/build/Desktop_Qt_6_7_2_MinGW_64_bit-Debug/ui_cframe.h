/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *Agregar_Item;
    QLineEdit *LE_Item;
    QTextEdit *mostrar_item;
    QSpinBox *Sb_cant_items;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(1144, 612);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1131, 571));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        Agregar_Item = new QPushButton(tab_3);
        Agregar_Item->setObjectName("Agregar_Item");
        Agregar_Item->setGeometry(QRect(470, 250, 83, 29));
        LE_Item = new QLineEdit(tab_3);
        LE_Item->setObjectName("LE_Item");
        LE_Item->setGeometry(QRect(270, 150, 291, 28));
        mostrar_item = new QTextEdit(tab_3);
        mostrar_item->setObjectName("mostrar_item");
        mostrar_item->setGeometry(QRect(700, 210, 291, 261));
        Sb_cant_items = new QSpinBox(tab_3);
        Sb_cant_items->setObjectName("Sb_cant_items");
        Sb_cant_items->setGeometry(QRect(600, 90, 121, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1144, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        Agregar_Item->setText(QCoreApplication::translate("cframe", "Agregar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("cframe", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("cframe", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("cframe", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("cframe", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
