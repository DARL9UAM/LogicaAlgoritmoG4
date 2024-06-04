#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* Variables */
    int num, cuadrado;
    system("cls || clear");
    printf("Dime un numero");
    scanf("%i", &num);

    //Evaluar si el numero es par
    if (num%2 == 0){
        cuadrado=pow(num, 2);
        printf("El cuadrado de %i es %i", num, cuadrado);
    }else{
        printf("El numero %i no es par", num);
    }
    return 0;
}
