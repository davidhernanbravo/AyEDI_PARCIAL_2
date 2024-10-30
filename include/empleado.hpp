#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "persona.hpp"

class Empleado : public Persona 
    {
        private:
            string puesto;

        public:
            Empleado(string codigo, string nombre, string domicilio, string puesto);
            
            string obtenerPuesto();
    };

#endif