#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto
{
protected:
    std::string nombre;
    double precio;
    std::string descripcion;
public:
    Producto(const std::string& nombre, double precio);
    virtual ~Producto();

    virtual double calcularValorTotal() const = 0;
    virtual void mostrarInformacion() const;

    std::string getNombre() const {
        return nombre;
    }
};

#endif // PRODUCTO_H
