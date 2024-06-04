/*Leer el nombre y apellido de una persona imprimir el nombre compelto*/
#include <stdio.h>

int main(int argc, char const *argv)
{
    /*code*/
    char nom[30];
    char ape[30];
    printf("Dime tu nombre");
    scanf("%s", nom);
    printf("Dime tu apellido");
    scanf("%s", ape);
    printf("Tu nombre completo es %s %s", nom, ape);
    return 0;
}