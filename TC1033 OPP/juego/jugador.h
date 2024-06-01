#ifndef _JUGADOR_H_
#define _JUGADOR_H_
#include <string>
#include "dado.h"
using std::string;

class Jugador
{
    private:
        string nombre;
        string color;
        int posicion;
        Dado midado;
        void cambia_posicion(int n);

    public:
        Jugador(); // Constructor por default (sin parámetros)
        Jugador(int n, string m); // Constructor que incorpora un string y un entero
        
        ~Jugador(); // Destructor de jugador
        
        int get_posicion();
        void set_nombre(string n);
        void imprimir();
        void mover();

};
#endif 