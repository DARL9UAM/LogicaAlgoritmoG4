/* Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo*/
#include<iostream>

using namespace std;

main()
{
    int num = 0, suma = 0;

    while (num >= 0)
    {
        suma += num;
        cout << "Dime un #: ";
        cin >> num;
        
    }
    cout << "La suma es\n" << suma << endl;
    return 0;
}
