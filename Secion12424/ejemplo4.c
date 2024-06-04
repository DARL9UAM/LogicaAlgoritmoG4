/*Almcenar 10 elementos y sumarlos*/

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int suma;
    int elementos[10];
    elementos[0] = 1;
    elementos[1] = 2;
    elementos[2] = 3;
    elementos[3] = 4;
    elementos[4] = 5;
    elementos[5] = 6;
    elementos[6] = 7;
    elementos[7] = 8;
    elementos[8] = 9;
    elementos[9] = 10;

    suma = elementos[0] + elementos[1] + elementos[2] + elementos[3] + elementos[4] + elementos[5] + elementos[6] + elementos[7] + elementos[8] + elementos[9];

    printf("La suma de los elementos es: %i \n", suma);
    return 0;
}
