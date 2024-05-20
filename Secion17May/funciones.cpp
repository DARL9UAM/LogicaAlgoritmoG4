#include<iostream>
#include "variables.h"

using namespace std;

int menu();
void start();
void addGrade();
void showGrades();
void highestGrade();
void lowestGrade();
void averageGrade();

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
                break;
            case 4:
                lowestGrade();
                break;
            case 5:
                averageGrade();
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
    int hight = grades[0];
    for (int i = 1; i < position; i++)
    {
        if (grades[i] > hight)
        {
            hight = grades[i];
        }
        cout << "La nota mas alta es: " << hight << endl;
    }
    system("pause");
}


void lowestGrade(){
    int lowest = grades[0];
    for (int i = 0; i < position; i++)
    {
        if ( grades[i] < lowest )
        {
            lowest = grades[i];
        }
        cout << "La nota mas baja es: " << lowest << endl;
    }
    system("pause");
}

void averageGrade(){
    float sum = 0;
    for (int i = 0; i < position; i++)
    {
        sum += grades[i];
    }
    float average = sum / position;
    cout << "El promedio es: " << average << endl;
    system("pause");
}