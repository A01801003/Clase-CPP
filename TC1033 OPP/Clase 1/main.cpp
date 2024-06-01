# include <iostream>
# include <cmath>
using std::cout;
using std::cin;
using std::endl;

// Librerías
# include <iostream>
# include <cmath>
// 
using std::cout;
using std::endl;
using std::cin;

int main()
{
    float x = 0.0;
    cout << "La variable x es " << x << endl;
    int z = sqrt(4);

    //cin >> z;

// CONDICIONALES

    if (z == 2 && x != 0)
    {
        cout << "Z es 2" << endl;
    }
    else
    {
        cout << "Z no es 2" << endl;
    }

for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

// CICLOS
    int i = 0;
    while (i < 10)
    {
        cout << "Drentro del WHILE " << i <<endl;
        i = i + 2;
    }

    i = 0;
    do
    {
        cout << "Drentro del DO WHILE " << i <<endl;
        i = i + 3;
    } while (i < 10);
    
}