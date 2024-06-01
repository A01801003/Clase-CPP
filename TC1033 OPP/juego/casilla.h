#ifndef _CASILLA_H_
#define _CASILLA_H_

class Casilla 
{
    private:
    int pos; 
    int cambio;

    public: 
    Casilla (); 
    Casilla(int p, int c); 
    void imprimir(); 
    int get_pos(); 
    int get_cambio(); 
    ~Casilla(); 
};
#endif