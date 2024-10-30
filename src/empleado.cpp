#include "../include/empleado.hpp"

Empleado::Empleado(string codigo, string nombre, string domicilio, string puesto)
    : Persona(codigo, nombre, domicilio), puesto(puesto) {}

string Empleado::obtenerPuesto() 
    { 
        return puesto; 
    }