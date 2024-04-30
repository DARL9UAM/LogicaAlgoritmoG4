/* Mostrar nuemros impares de x hasta y*/

#include <iostream>

using namespace std;

void mostrarNumerosImpares(int x, int y)
{

    if (x % 2 == 0)
    {
        x++;
    }

    for (int i = x; i <= y; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    cout << "Los números impares entre " << x << " y " << y << " son:" << endl;
    mostrarNumerosImpares(x, y);

    return 0;
}
