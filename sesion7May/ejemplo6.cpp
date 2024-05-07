/*Leer un numero y mostrar la tabla de multiplicar de dicho numero*/

#include <iostream>

using namespace std;

main()
{
    int num;
    cout << "Dime el numero: ";
    cin >> num;
    int i = 0;

    while (i <= 12)
    {
        int resultado = i * num;
        cout << num << " * " << i << " = " << resultado << endl;
        i++;
    }

    return 0;
}
