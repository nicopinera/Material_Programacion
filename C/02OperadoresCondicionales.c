#include <stdio.h>
#define PI 3.14159 // Definicion de una constante
#define CUBO(a) a*a*a //Macro - Similar a una funcion
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
    int suma,a,b;
    a = 3;
    suma = a + PI; // Uso de la constante
    printf("La Suma es es: %d\n",suma);
    b = 4;
    printf("El cubo de la variabe es: %i\n",CUBO(b));
    getchar();
    return 0;
}
