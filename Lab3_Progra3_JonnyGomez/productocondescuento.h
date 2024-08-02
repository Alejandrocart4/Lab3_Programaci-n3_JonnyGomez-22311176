#ifndef PRODUCTOCONDESCUENTO_H
#define PRODUCTOCONDESCUENTO_H

#include "producto.h"

class ProductoConDescuento : public Producto
{
private:
    double descuento;

public:
    ProductoConDescuento(const std::string& nombre, double precio, double descuento);
    double calcularValorTotal() const override;
    void mostrarInformacion() const override;
};

#endif // PRODUCTOCONDESCUENTO_H
