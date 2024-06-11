#include<iostream>
#include<string.h>
#include "variables.h"

using namespace std;

CITY cities[MAX_REG];
int pos = 0;

//Funciones

void addCity(CITY *city);
CITY findCity(int id);
int findPos(int id);
void updateCity(CITY *city, int id);
void destroyCity(int id);

void pedirDato();
void mostrarTodo();
void editar();
void eliminar();
void buscar();
int menu();
void principal();

void addCity(CITY *city){
    cities[pos] = *city;
    pos++;
}

CITY findCity(int id)
{
    CITY city;
    for(int i = 0; i<pos; i++){
        if (cities[i].id = id)
        {
            return cities[i];
        }
    }
    return city;
}

int findPos(int id){
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id) return i;
    }
    return -1;
}

void updateCity(CITY *city, int id){
    int position = findPos(id);
    strcpy(cities[pos].name, city->name );
    strcpy(cities[pos].description, city->description);
}

void destroyCity(int id){
    int position = findPos(id);
    for (int i = position; i < pos-1; i++)
    {
        cities[i]=cities[i+1];
    }
    CITY c;
    cities[pos-1] = c;
    pos--;
}

int menu(){
    int op;
    cout << "Menu\n";
    cout << "1. Agregar \n";
    cout << "2. Editar \n";
    cout << "3. Eliminar\n";
    cout << "4. Motrar todo \n";
    cout << "5. Buscar \n";
    cout << "6. Salir\n";
    cout << "Opcion: ";
    cin >> op;
    return op;
}

void principal(){
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDato();
            break;
        case 2:
            editar();
            break;
        case 3:
            eliminar();
            break;
        case 4:
            mostrarTodo();
            break;
        case 5:
            buscar();
            break;
        case 6:
            cout << "Adios tierno...\n";
            break;  
        default:
        cout << "Deberias de leer mejor, solo hay seis opciones" << endl;
            break;
        }
    } while (op != 6);
}

void pedirDato(){
    CITY city;
    cout << "Datos de la ciudad" << endl;
    cout << "ID: ";
    cin >> city.id;
    cout << "Nombre: ";
    cin >> city.name;
    cout << "Descripcion: ";
    cin >> city.description;
    addCity(&city);
}

void mostrarTodo(){
    cout << "Mostrar Registros\n";
    for (int i = 0; i < pos; i++)
    {
        cout << cities[i].id << endl;
        cout << cities[i].name << endl;
        cout << cities[i].description << endl;
        cout << "..." << endl;
    }
    cout << "estas son todas las ciudades que ha ingresado" << endl;
}

void editar(){
    int id;
    cout << "Editar ciudad" << endl;
    cout << "ID de la ciudad que quiere editar: ";
    cin >> id;
    for (int i = 0; i < pos; i++){
        if (cities[i].id == id){
            cout << "Nombre actual: " << cities[i].name << endl;
            cout << "Descripcion actual: " << cities[i].description << endl;
            cout << "Nuevo nombre: ";
            cin >> cities[i].name;
            cout << "Nueva descripcion: ";
            cin >> cities[i].description;
            cout << "Editado con exito" << endl;
        }
    }
}

void eliminar(){
    int id;
    cout << "Eliminar ciudad" << endl;
    cout << "ID de la ciudad que quiere eliminar: ";
    cin >> id;
    for (int i = 0; i < pos; i++){
        if (cities[i].id == id){
            for (int j = i; j < pos; j++){
                cities[j] = cities[j + 1];
            }
            cout << "Eliminado con exito" << endl;
        }
    }
}

void buscar(){
    int id;
    cout << "Buscar ciudad" << endl;
    cout << "ID de la ciudad que desea buscar: ";
    cin >> id;
    for (int i = 0; i < pos; i++){
        if (cities[i].id == id){
            cout << "ID: " << cities[i].id << endl;
            cout << "Nombre: " << cities[i].name << endl;
            cout << "Decripcion: " << cities[i].description << endl;
            cout << "Busqueda completada" << endl;
        }
    }
}