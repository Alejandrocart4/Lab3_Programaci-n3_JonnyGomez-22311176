#include "inventario.h"
#include <algorithm> // Para std::find_if


void Inventario::agregarProducto(Producto* producto) {
    productos.push_back(producto);
}

void Inventario::eliminarProducto(const std::string& nombre) {
    for (auto it = productos.begin(); it != productos.end(); ++it) {
        if ((*it)->getNombre() == nombre) {
            delete *it;
            productos.erase(it);
            break; // Importante: salir del bucle después de eliminar el producto
        }
    }
}


void Inventario::mostrarInventario() const {
   // std::cout << "Inventario:\n";
    for (const auto& producto : productos) {
     //   std::cout << "Nombre: " << producto->nombre_ << "\n";
       // std::cout << "Precio: " << producto->precio_ << "\n";
        producto->mostrarInformacion(); // Llama al método específico de cada producto
        //std::cout << "------------------------\n";
    }
}

double Inventario::calcularValorInventario() const {
    double valorTotal = 0.0;
    for (const auto& producto : productos) {
        valorTotal += producto->calcularValorTotal();
    }
    return valorTotal;
}
