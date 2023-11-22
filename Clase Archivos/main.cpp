# include <fstream>
# include <iostream>
# include <string>
# include <sstream>

using std:: cout; 
using std:: cin; 
using std:: endl; 
using std:: ifstream; 
using std:: string;
using std:: stringstream;

int main()
{
    ifstream archivo; 
    archivo.open ("/workspaces/Clase-CPP/Clase Archivos/inventario.csv"); 
    string linea; 
    while (getline(archivo, linea))
    {
        cout << linea << endl; 
        stringstream token(linea);
        string pos1;
        getline(token, pos1, ','); 
        //cout << pos1 << endl; 
    } 

    archivo.close(); 
}
