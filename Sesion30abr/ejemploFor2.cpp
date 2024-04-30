/*Leer cinco numeros y mostrarlos*/
#include <iostream>

using namespace std;

#define MAX 5
int numeros[MAX];
int fila;

void agregar(int numero);
void mostrar();
main()
{
   int cant;
   int num;
   cout << "Cuantos numeros quieres ingresar: ";
   cin >> cant;
   for(int i = 0; i <cant; i++){
    cout << "Dime un #: ";
    cin >> num;
    agregar(num);
   }
    cout << "mostrar elementos\n";
    mostrar();

}

void agregar(int num)
{
    if (fila >= MAX)
    {
        cout << "NO SE PUEDE AGREGAR MAS NUMEROS" << endl;
    }else
    {
        numeros[fila] = num;
        fila++;
    }
}

void mostrar(){
    if(fila == 0){
        cout << "no hay elementos" << endl;
    }else{
        for(int i = 0; i <fila; i++){
            cout << numeros[i] << endl;
        }
    }
}