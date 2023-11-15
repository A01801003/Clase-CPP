# include <iostream>
# include "casilla.h"
# include "dado.h"
# include "jugador.h"

using std:: cout; 
using std:: endl; 

int Casilla :: get_pos()
{
    return pos; 
}

int Casilla:: get_cambio()
{
    return cambio; 
}

void Casilla:: imprimir()
{
    cout << "Posicion casilla: " << pos << endl;
    cout << "Cambio: " << cambio << endl;
}

Casilla::Casilla()
{
    pos = 0;
    cambio = 0;
}
Casilla:: Casilla(int p, int c)
{
    pos = p; 
    cambio = c;
}

Casilla::~Casilla()
{
    cout << "Desde destructor de casilla " << pos << endl; 
}