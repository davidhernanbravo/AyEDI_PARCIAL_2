#include "../include/pedido.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente, Empleado* vendedor)
    : codigo(codigo), cliente(cliente), vendedor(vendedor) {}

string Pedido::obtenerCodigo() 
    {
        return codigo;
    }

void Pedido::adjuntar(Equipo* equipo) 
    {
        equipos.push_back(equipo);
    }

void Pedido::mostrar() 
    {
        cout << "Pedido: " << codigo << endl;
        cout << "Cliente: " << cliente->obtenerNombre() << " (" << cliente->obtenerDomicilio() << ")" << endl;
        cout << "Vendedor: " << vendedor->obtenerNombre() << " - " << vendedor->obtenerPuesto() << endl;
        cout << "Equipos:" << endl;

        for(auto& equipo : equipos) 
            {
                cout << "  - " << equipo->obtenerNombre() << " (" << equipo->obtenerCodigo() << ") - $" << fixed << setprecision(2) << equipo->obtenerPrecio() << endl;
            }
        cout << "............................................" << endl;
        cout << endl;
    }