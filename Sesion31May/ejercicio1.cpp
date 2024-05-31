#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int *puntero;
    int punteroFalso;
    puntero = &num;

    num = 90;
    punteroFalso = num;

    printf("%d: %d \n", num, puntero);
    printf("%d: %d \n", num, &puntero);
    printf("%d: %d \n", num,&punteroFalso);
    printf("%d\n", punteroFalso);

    *puntero = 50;

    printf("%d: %d \n", &num, &puntero);
    printf("%d: %d \n", num, *puntero);
    printf("%d: %d \n", num, punteroFalso);
    
    return 0;
}
