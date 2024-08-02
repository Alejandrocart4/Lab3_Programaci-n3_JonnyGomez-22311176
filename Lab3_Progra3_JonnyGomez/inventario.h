#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "producto.h"

class Inventario
{
private:
    std::vector<Producto*> productos;

public:
    void agregarProducto(Producto* producto);
    void eliminarProducto(const std::string& nombre);
    void mostrarInventario() const;
    double calcularValorInventario() const;
};

#endif // INVENTARIO_H
