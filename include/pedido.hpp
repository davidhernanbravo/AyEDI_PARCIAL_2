#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <list>
#include <string>

#include "equipo.hpp"
#include "cliente.hpp"
#include "empleado.hpp"


using namespace std;

class Pedido 
    {
        private:
            string codigo;           
            Cliente* cliente; 
            Empleado* vendedor; 
            list<Equipo*> equipos;

        public:
            Pedido(string codigo, Cliente* cliente, Empleado* vendedor);

            string obtenerCodigo();
            void adjuntar(Equipo* equipo);
            void mostrar();
    };

#endif