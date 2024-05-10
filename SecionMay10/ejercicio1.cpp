/*Escribe un programa que solicite al usuario un número entero positivo y luego
imprima todos los números desde 1 hasta ese número*/
#include<iostream>

using namespace std;

main()
{
    int num,i = 1;
    cout << "Ingrese un numero: ";
    cin >> num;

    while (i <= num)
    {
        cout << i << endl;
        i ++;
    }
    
    return 0;
}
