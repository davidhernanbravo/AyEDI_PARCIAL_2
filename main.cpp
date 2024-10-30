/*  Una Empresa que vende “Ropa de Seguridad” nos convoca para la realización de una App 
    que permita registrar los Pedidos de Equipos de los clientes.

    Implementar en C++ este caso permitiendo:

    1.	Cargar Equipos (ropa, zapatos, antiparras, etc.).
    2.	Cargar Clientes
    3.	Cargar Empleados
    4.	Cargar Pedidos de Artículos asignados a los Clientes.
    5.	Mostrar los Pedidos de los Clientes.

    La aplicación deberá realizarse implementando los objetos correspondientes.
    Deberá mostrar por consola los pedidos de los clientes.
    Se aconseja usar clases y un array de objetos.  */

#include <iostream>

#include "include/equipo.hpp"
#include "include/cliente.hpp"
#include "include/empleado.hpp"
#include "include/pedido.hpp"


int main() 
    {
        
        Equipo* equipo1 = new Equipo("EQ001", "Casco de seguridad", 15000.50);
        Equipo* equipo2 = new Equipo("EQ002", "Mascara de proteccion", 34900.00);
        Equipo* equipo3 = new Equipo("EQ003", "Antiparras", 6500.00);
        Equipo* equipo4 = new Equipo("EQ004", "Guantes antideslizantes", 3250.25);
        Equipo* equipo5 = new Equipo("EQ005", "Orejeras de diadema", 12300.25);
        Equipo* equipo6 = new Equipo("EQ006", "Calzado GORE-TEX", 95750.00);

        
        Cliente* cliente1 = new Cliente("C001", "Diego Reado", "Corneta 3100");
        Cliente* cliente2 = new Cliente("C002", "Marcelo Quillo", "Manicomio 2222");
        Cliente* cliente3 = new Cliente("C003", "Felipe Lado", "Calvo 140");

       
        Empleado* empleado1 = new Empleado("E001", "Elsa Ludo","Buendia 5436", "Supervisora");
        Empleado* empleado2 = new Empleado("E002", "Pedro Medario","El Camello 190", "Vendedor");

        
        Pedido* pedidoCliente1 = new Pedido("O001", cliente1, empleado1);
        pedidoCliente1->adjuntar(equipo1);
        pedidoCliente1->adjuntar(equipo5);

        Pedido* pedidoCliente2 = new Pedido("O002", cliente2, empleado2);
        pedidoCliente2->adjuntar(equipo2);
        pedidoCliente2->adjuntar(equipo6);

        Pedido* pedidoCliente3 = new Pedido("O003", cliente3, empleado1);
        pedidoCliente3->adjuntar(equipo5);
        pedidoCliente3->adjuntar(equipo4);

        cout << "****************************************" << endl;
        cout << "EQUIPOS DE SEGURIDAD LA INSEGURA DEL SUR" << endl;
        cout << "****************************************" << endl;
        cout << endl;
        cout << "LISTA DE EQUIPOS:" << endl;
        cout << endl;

        pedidoCliente1->mostrar();
        pedidoCliente2->mostrar();
        pedidoCliente3->mostrar();

        delete equipo1;
        delete equipo2;
        delete equipo3;
        delete equipo4;
        delete equipo5;
        delete equipo6;
        delete cliente1;
        delete cliente2;
        delete cliente3;
        delete empleado1;
        delete empleado2;
        delete pedidoCliente1;
        delete pedidoCliente2;
        delete pedidoCliente3;

        return 0;
    }