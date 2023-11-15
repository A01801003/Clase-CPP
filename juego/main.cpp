#include <iostream>
#include "dado.h"
#include "jugador.h"
# include "casilla.h"

using std::cout;
using std::endl;

int main()
{
    Dado midado;
    midado.set_caras(8);

    //cout << midado << endl;

    midado.imprimir();

      // Lanzar el dado
    for (int i = 0; i < 5; i++)
    {
        cout << midado.lanzar() << endl;
    }


    Jugador yo; // Crear un objeto o 'Jugador' llamado 'yo'
    yo.set_nombre("Sara"); // Asignar nombre al jugador 'yo'
    yo.imprimir(); // Imprimir nombre y posición
    yo.mover(); // Cambiar la posición
    yo.imprimir(); // Imprimir de nuevo el nombre y posición
    Jugador tu = Jugador (10, "Mich"); // Crear un objeto o 'Jugador' con nuevo nombre y posición
    tu.imprimir(); // Imprimir nombre y posición
    tu.mover(); // Cambiar la posición
    tu.imprimir(); // Imprimir de nuevo el nombre y posición

    Casilla casilla = Casilla(7, 8);
    casilla.get_pos();
    casilla.get_cambio();
    casilla.imprimir();
}