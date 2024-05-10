/* Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande*/

#include<iostream>

using namespace std;
#define TAM 10
void imprimir();

main()
{
    imprimir();
    return 0;
}

void imprimir(){
    int num[TAM], cont = 0;
    
    cout << "Ingrese" << TAM << "numeros enteros: " << endl;

    while (cont < TAM)
    {
        cout << "Numero" << cont + 1 << " :";
        cin >> num[cont];
        cont++;
    }
    
    int maximo = num[0];
    cont = 1;
    while (cont < TAM)
    {
        if (num[cont] > maximo)
        {
            maximo=num[cont];
        }
        cont++;
    }
    cout << "El numero mas grande es: " << maximo << endl;
}