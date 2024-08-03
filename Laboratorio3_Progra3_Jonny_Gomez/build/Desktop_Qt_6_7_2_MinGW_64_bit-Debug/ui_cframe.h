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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *page1;
    QPushButton *page3;
    QPushButton *page2;
    QPushButton *btn_close;
    QPushButton *btn_total_invent;
    QWidget *page_3;
    QLabel *label_19;
    QFrame *line_7;
    QLabel *label_20;
    QPushButton *pushButton_2;
    QLabel *label_21;
    QFrame *line_8;
    QLineEdit *LE_Nombre_3;
    QLabel *label_22;
    QDoubleSpinBox *spb_Precio_3;
    QComboBox *comboBox_Tipo_3;
    QLabel *label_23;
    QSpinBox *spb_Adicional_3;
    QTextEdit *TE_Descripcion_3;
    QPushButton *btn_back;
    QWidget *page_4;
    QLabel *label_24;
    QFrame *line_9;
    QPushButton *pushButton_3;
    QLineEdit *LE_NombreEliminar_3;
    QLabel *label_25;
    QPushButton *btn_back2;
    QWidget *page_2;
    QLabel *label_26;
    QTextEdit *TE_ProductosLista_3;
    QPushButton *btn_back3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(800, 600);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 561));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 30, 451, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font.setPointSize(26);
        font.setBold(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        page1 = new QPushButton(page);
        page1->setObjectName("page1");
        page1->setGeometry(QRect(330, 140, 131, 41));
        page3 = new QPushButton(page);
        page3->setObjectName("page3");
        page3->setGeometry(QRect(330, 230, 131, 41));
        page2 = new QPushButton(page);
        page2->setObjectName("page2");
        page2->setGeometry(QRect(330, 320, 131, 41));
        btn_close = new QPushButton(page);
        btn_close->setObjectName("btn_close");
        btn_close->setGeometry(QRect(620, 500, 141, 31));
        btn_total_invent = new QPushButton(page);
        btn_total_invent->setObjectName("btn_total_invent");
        btn_total_invent->setGeometry(QRect(330, 400, 131, 41));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(80, 210, 121, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        line_7 = new QFrame(page_3);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(80, 270, 311, 16));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 310, 171, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        label_20->setFont(font2);
        label_20->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 440, 181, 41));
        pushButton_2->setFont(font2);
        label_21 = new QLabel(page_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(200, 60, 451, 51));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(false);
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_8 = new QFrame(page_3);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(70, 120, 661, 20));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        LE_Nombre_3 = new QLineEdit(page_3);
        LE_Nombre_3->setObjectName("LE_Nombre_3");
        LE_Nombre_3->setGeometry(QRect(220, 150, 501, 41));
        QFont font4;
        font4.setPointSize(16);
        LE_Nombre_3->setFont(font4);
        label_22 = new QLabel(page_3);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(80, 150, 121, 31));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        spb_Precio_3 = new QDoubleSpinBox(page_3);
        spb_Precio_3->setObjectName("spb_Precio_3");
        spb_Precio_3->setGeometry(QRect(220, 210, 181, 41));
        spb_Precio_3->setFont(font2);
        spb_Precio_3->setMaximum(999.990000000000009);
        comboBox_Tipo_3 = new QComboBox(page_3);
        comboBox_Tipo_3->addItem(QString());
        comboBox_Tipo_3->addItem(QString());
        comboBox_Tipo_3->setObjectName("comboBox_Tipo_3");
        comboBox_Tipo_3->setGeometry(QRect(210, 300, 161, 51));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        comboBox_Tipo_3->setFont(font5);
        label_23 = new QLabel(page_3);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(500, 210, 171, 31));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        spb_Adicional_3 = new QSpinBox(page_3);
        spb_Adicional_3->setObjectName("spb_Adicional_3");
        spb_Adicional_3->setGeometry(QRect(220, 360, 151, 41));
        spb_Adicional_3->setFont(font4);
        TE_Descripcion_3 = new QTextEdit(page_3);
        TE_Descripcion_3->setObjectName("TE_Descripcion_3");
        TE_Descripcion_3->setGeometry(QRect(430, 250, 291, 171));
        TE_Descripcion_3->setFont(font4);
        btn_back = new QPushButton(page_3);
        btn_back->setObjectName("btn_back");
        btn_back->setGeometry(QRect(630, 480, 131, 41));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_24 = new QLabel(page_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(220, 130, 391, 51));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_9 = new QFrame(page_4);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(150, 190, 531, 20));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 330, 181, 41));
        pushButton_3->setFont(font2);
        LE_NombreEliminar_3 = new QLineEdit(page_4);
        LE_NombreEliminar_3->setObjectName("LE_NombreEliminar_3");
        LE_NombreEliminar_3->setGeometry(QRect(150, 260, 531, 41));
        LE_NombreEliminar_3->setFont(font4);
        label_25 = new QLabel(page_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(300, 220, 221, 31));
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(false);
        label_25->setFont(font6);
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_back2 = new QPushButton(page_4);
        btn_back2->setObjectName("btn_back2");
        btn_back2->setGeometry(QRect(660, 490, 121, 41));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_26 = new QLabel(page_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(90, 80, 391, 31));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(true);
        label_26->setFont(font7);
        label_26->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        TE_ProductosLista_3 = new QTextEdit(page_2);
        TE_ProductosLista_3->setObjectName("TE_ProductosLista_3");
        TE_ProductosLista_3->setGeometry(QRect(90, 110, 631, 361));
        QFont font8;
        font8.setPointSize(14);
        TE_ProductosLista_3->setFont(font8);
        TE_ProductosLista_3->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        btn_back3 = new QPushButton(page_2);
        btn_back3->setObjectName("btn_back3");
        btn_back3->setGeometry(QRect(670, 500, 111, 41));
        stackedWidget->addWidget(page_2);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        label->setText(QCoreApplication::translate("cframe", "MEN\303\232", nullptr));
        page1->setText(QCoreApplication::translate("cframe", "AGREGAR", nullptr));
        page3->setText(QCoreApplication::translate("cframe", "ELIMINAR", nullptr));
        page2->setText(QCoreApplication::translate("cframe", "INVENTARIO", nullptr));
        btn_close->setText(QCoreApplication::translate("cframe", "SALIR", nullptr));
        btn_total_invent->setText(QCoreApplication::translate("cframe", "TOTAL INVENTARIO", nullptr));
        label_19->setText(QCoreApplication::translate("cframe", "Precio:", nullptr));
        label_20->setText(QCoreApplication::translate("cframe", "Tipo de Dato:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "AGREGAR", nullptr));
        label_21->setText(QCoreApplication::translate("cframe", "Agregar Producto", nullptr));
        label_22->setText(QCoreApplication::translate("cframe", "Nombre:", nullptr));
        comboBox_Tipo_3->setItemText(0, QCoreApplication::translate("cframe", "Descuento", nullptr));
        comboBox_Tipo_3->setItemText(1, QCoreApplication::translate("cframe", "Cantidad", nullptr));

        label_23->setText(QCoreApplication::translate("cframe", "Descripci\303\263n:", nullptr));
        btn_back->setText(QCoreApplication::translate("cframe", "REGRESAR", nullptr));
        label_24->setText(QCoreApplication::translate("cframe", "Eliminar Producto", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cframe", "ELIMINAR", nullptr));
        label_25->setText(QCoreApplication::translate("cframe", "Nombre de Producto:", nullptr));
        btn_back2->setText(QCoreApplication::translate("cframe", "REGRESAR", nullptr));
        label_26->setText(QCoreApplication::translate("cframe", "Inventario:", nullptr));
        btn_back3->setText(QCoreApplication::translate("cframe", "REGRESAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
