#include "../include/persona.hpp"

Persona::Persona(string codigo, string nombre, string domicilio)
    : codigo(codigo), nombre(nombre), domicilio(domicilio) {}

string Persona::obtenerCodigo() 
    { 
        return codigo; 
    }

string Persona::obtenerNombre() 
    { 
        return nombre; 
    }

string Persona::obtenerDomicilio() 
    { 
        return domicilio; 
    }