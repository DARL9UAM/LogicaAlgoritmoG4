/*Funciones*/
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/*Saludar*/
void showMessage();

void showMessage(){
    printf("Universidad Americana \n");
    printf("UAM \n");
}

void suma();

void suma(){
    int num1, num2, suma;
   cout << "dime un numero: \n";
   cin >> num1;
   cout << "dime otro numero: \n";
   cin >>  num2;
   suma = num1 + num2;
   cout << "La suma es: \n" << suma << endl;
}