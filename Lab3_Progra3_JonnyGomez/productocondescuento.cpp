#include "productocondescuento.h"

ProductoConDescuento::ProductoConDescuento(const std::string& nombre, double precio, double descuento)
    : Producto(nombre, precio), descuento(descuento) {}

double ProductoConDescuento::calcularValorTotal() const {
    return precio * (1.0 - descuento / 100.0);
}

void ProductoConDescuento::mostrarInformacion() const {
    Producto::mostrarInformacion();
    //std::cout << "Descuento aplicado: " << descuento << "%" << std::endl;
}
