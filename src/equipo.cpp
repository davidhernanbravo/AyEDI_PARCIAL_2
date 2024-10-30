#include "../include/equipo.hpp"

Equipo::Equipo(string codigo, string nombre, double precio)
    : codigo(codigo), nombre(nombre), precio(precio) {}

string Equipo::obtenerCodigo()
    {
        return codigo;
    }

string Equipo::obtenerNombre()
    {
        return nombre;
    }

double Equipo::obtenerPrecio()
    {
        return precio;
    }