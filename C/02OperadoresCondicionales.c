#include <stdio.h>
#define PI 3.14159 // Definicion de una constante
/*
Operadores Condicionales y Condicionales
Toma de decision, tenemos dos tipos
- Operadores de Igualdad
    - == igual que
    - != Diferente que
- Operadores de Relacion
    - > mayor que
    - < menor que
    - >= mayor o igual que
    - <= menor o igual que
*/
int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("Sos mayor de edad\n");
    }
    else if (edad == 17)
    {
        printf("Casi eres mayor de edad\n");
    }

    else
    {
        printf("No eres mayor de edad\n");
    }
    getchar();
    return 0;
}
