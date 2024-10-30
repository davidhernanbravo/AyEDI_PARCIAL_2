#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

using namespace std;

class Persona 
    {
        private:
            string codigo;
            string nombre;
            string domicilio;

        public:
            Persona(string codigo, string nombre, string domicilio);
            
            string obtenerCodigo();
            string obtenerNombre();
            string obtenerDomicilio();
    };

#endif