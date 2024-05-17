#include<iostream>
#include "variables.h"

using namespace std;

int menu();
void start();
void addGrade();
void showGrades();
void highestGrade();
void lowestGrade();

int menu(){
    int option;
    system("cls||clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salida" << endl;
    cout << "Ingresar opcion: ";
    cin >> option;
    return option;
}

void start(){
    int option;
    while (option != 6){
        option = menu();
        switch (option){
            case 1:
                cout << "Ingresar notas" << endl;
                addGrade();
                system("pause");
                break;
            case 2:
                showGrades();
                system("pause");
                break;
            case 3:
                highestGrade();
                system("pause");
                break;
            case 6:
                cout << "Salir" << endl;
                system("pause");
                break;
           default:
                cout << "Opcion no valida" << endl;
                system("pause");
                break;
        }
    }
}

void addGrade(){
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }else{
        cout << "No hay espacio para mas notas" << endl;
    }
    
}

void showGrades(){
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "nota" << i + 1 << ":" << grades[i] << endl;
    }
    
}

void highestGrade(){
    int highest = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > highest )
        {
            highest = grades[i];
        }
        cout << "La nota mas alta es: " << highest << endl;
    }
}

void lowestGrade(){

}