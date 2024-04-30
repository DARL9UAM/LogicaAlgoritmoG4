/*Mostrar las vocale*/
#include <iostream>

using namespace std;

char vocales[5] = {'a', 'e', 'i', 'o', 'u'};

 void imprimir();
main()
{
    imprimir();
    return 0;
}

void imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << vocales[i] << endl;
    }
}