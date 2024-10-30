#ifndef EQUIPO_HPP
#define EQUIPO_HPP

#include <string>

using namespace std;

class Equipo 
    {
        private:
            string codigo;
            string nombre;
            double precio;

        public:
            Equipo(string codigo, string nombre, double precio);

            string obtenerCodigo();
            string obtenerNombre();
            double obtenerPrecio();
    };

#endif