#define MAX_STR 60
#define MAX_REG 1000

typedef struct PERSON
{
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int grade;
};

//CRUD "Crear, Leer, Actualizar y Borrar" in english "Create, Read, Update and Delete"

PERSON people[MAX_REG];
int pos = 0;

