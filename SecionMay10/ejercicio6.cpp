/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio*/

#include<iostream>

using namespace std;

main()
{
     int cant_calificaciones;
    cout << "Ingrese la cantidad de calificiones a promediar: ";
    cin >> cant_calificaciones;

   if (cant_calificaciones < 0)
   {
     cout << "La cantidad de calificaciones tiene que ser enteros positivos." << endl;
     return 1;
   }

   double calificaciones[cant_calificaciones];
   int cont = 0;
   int suma = 0.0;

   cout << "Ingrese las: " << cant_calificaciones << "calificaciones: " << endl;

   while (cont < cant_calificaciones)
   {
     cout << "Calificacion" << cont+1 << ": " << endl;
     cin >> calificaciones[cont];
      if (calificaciones[cont] < 0)
      {
       cout << "La calificaion debe ser un entero positivo. " << endl;
       return 1;
      }
   suma += calificaciones[cont];
   cont++;
   }
   
   double promedio = suma / cant_calificaciones;
   cout << "El promedio de las calificaiones ingresadas es: " << promedio << endl;
    return 0;
}


   
