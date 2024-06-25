#include<iostream>
#include<string.h>
#include "variables.h"
#include<fstream>
#include<cstdlib>
using namespace std;

CITY cities[MAX_REG];
int pos = 0;

//Prototipos

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
void showData(CITY &city);
int menu();
void principal();

//Manejo de archivos
int loadCities();
void writeFile(const CITY &city);


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
    pos = loadCities();
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
     if (findPos(city.id)!=-1)
    {
        cout << "Registro ya existe..." << endl;
        return;
    }
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    addCity(&city);
    writeFile(city);
}

void mostrarTodo(){
     if(pos = 0){
        cout << "No hay nada que eliminar..." << endl;
        return;
    }
    cout << "Mostrar Registros\n";
    for (int i = 0; i < pos; i++)
    {
        showData(cities[i]);
        cout << "..." << endl;
    }
    cout << "estas son todas las ciudades que ha ingresado" << endl;
}

void editar(){
    CITY city;
    int id;
    cout << "Editar ciudad" << endl;
    cout << "ID de la ciudad que quiere editar: ";
    cin >> id;
    if (findPos(id)==-1)
    {
        cout << "Registro no existe..." << endl;
        return;
    }
    
    city = findCity(id);
    cout << "Nombre actual: " << city.name << endl;
    cout << "Descripcion actual: " << city.description << endl;
    cout << "Nuevo nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Nueva descripcion: "; 
    scanf(" %[^\n]", city.description);
    updateCity(&city, id);
    cout << "Registro actualizado...\n";
}

void eliminar(){
    int id = 0;
    if(pos = 0){
        cout << "No hay nada que eliminar..." << endl;
        return;
    }
    cout << "Eliminar ciudad" << endl;
    cout << "ID de la ciudad que quiere eliminar: ";
    cin >> id;
    if (findPos(id)!=-1)
    {
        cout << "Registro no existe..." << endl;
        return;

    destroyCity(id);

    cout << "Eliminada con exito\n";
    }
}

void buscar()
{
    int id = 0;
    cout << "Buscar ciudad" << endl;
    cout << "ID de la ciudad que desea buscar: ";
    cin >> id;
    if (findPos(id)==-1)
    {
        cout << "Registro no existe..." << endl;
        return;
    }
    CITY city = findCity(id);
    int x = findPos(id);

    cout << "\nCiudad #" << x+1 << ":\n";
    showData(city);
    
}

void showData(CITY &city){
    cout << "ID: " << city.id << endl;
    cout << "Nombre: " << city.name << endl;
    cout << "Descripcion: " << city.description << endl;
}

int loadCities(){
    ifstream archivo("city.txt");
    if(archivo.fail()){
        return 0;
    }
    int i = 0;
    while(archivo >> cities[i].id){
        archivo.ignore();
        archivo.getline(cities[i].name, 30);
        archivo.getline(cities[i].description, 100);
        i++;
    }
    archivo.close();
    return i;
}
void writeFile(const CITY &city){
    ofstream archivo;

    archivo.open("cities.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    
    archivo << city.id << endl;
    archivo << city.name << endl;
    archivo << city.description << endl;
    archivo.close();
}