#include "productoconstock.h"

ProductoConStock::ProductoConStock(const std::string& nombre, double precio, int cantidad)
    : Producto(nombre, precio), cantidad(cantidad) {}

double ProductoConStock::calcularValorTotal() const {
    return precio * cantidad;
}

void ProductoConStock::mostrarInformacion() const {
    Producto::mostrarInformacion();
    //std::cout << "Cantidad disponible: " << cantidad << std::endl;
}
