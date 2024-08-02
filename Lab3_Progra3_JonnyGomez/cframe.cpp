#include "cframe.h"
#include "ui_cframe.h"

#include "Producto.h"
#include "inventario.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}

void cframe::on_Agregar_Item_clicked()
{
    std::string nombreIngresado = ui->LE_Item->text().toStdString();
    int cantidad_items = ui->Sb_cant_items->value();
    Producto* nuevoProducto = new Producto(nombreIngresado,cantidad_items);
    productos.agregarProducto(nuevoProducto);


    QString textoMostrar;
    for (const Producto* producto : miInventario.getProductos()) {
        textoMostrar += QString::fromStdString(producto->getNombre()) + "\n"; // Agrega un salto de línea
    }
    ui->mostrar_item->setPlainText(textoMostrar);

}

//buenas
