#include "producto.h"

Producto::Producto(const std::string& nombre, double precio)
    : nombre(nombre), precio(precio) {}

Producto::~Producto() {}

void Producto::mostrarInformacion() const {

    //std::cout << "Nombre: " << nombre << std::endl;
    //std::cout << "Precio: $" << precio << std::endl;
    //std::cout << "Descripción: " << descripcion << std::endl;
}
