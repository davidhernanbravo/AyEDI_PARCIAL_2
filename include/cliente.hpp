#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "persona.hpp"

class Cliente : public Persona 
    {
        public:
            Cliente(string codigo, string nombre, string domicilio);
    };

#endif