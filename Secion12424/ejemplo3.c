/*Arreglo donde se almacenen las vocales*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char vocales[5];
    vocales[0] = 'a';
    vocales[1] = 'e';
    vocales[2] = 'i';
    vocales[3] = 'o';
    vocales[4] = 'u';
    printf ("La vocal de los arreglos son: \n");
    printf("El valor del primer elemento es: %c\n", vocales[0]);
    printf("El valor del segundo elemento es: %c\n", vocales[1]);
    printf("El valor del tercer elemento es: %c\n", vocales[2]);
    printf("El valor del cuerto elemento es: %c\n", vocales[3]);
    printf("El valor del quinto elemento es: %c\n", vocales[4]);

    return 0;
}
