#ifndef PRODUCTOCONSTOCK_H
#define PRODUCTOCONSTOCK_H

#include "producto.h"

class ProductoConStock : public Producto
{
private:
    int cantidad;

public:
    ProductoConStock(const std::string& nombre, double precio, int cantidad);
    double calcularValorTotal() const override;
    void mostrarInformacion() const override;
};


#endif // PRODUCTOCONSTOCK_H
