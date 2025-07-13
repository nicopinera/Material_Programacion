#include <stdio.h>
#define PI 3.14159      // Definicion de una constante
#define CUBO(a) a *a *a // Macro - Similar a una funcion
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
- Operadores logicos
    - && And
    - || Or
    - ! Not
*/
int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d", &edad);

    // Estructura if-else
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
    int numero;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);

    // estructura switch
    switch (numero)
    {
    case 1:
        printf("Hoy es lunes\n");
        break;
    case 2:
        printf("Hoy es Martes\n");
        break;
    case 3:
        printf("Hoy es Miercoles\n");
        break;
    case 4:
        printf("Hoy es Jueves\n");
        break;
    case 5:
        printf("Hoy es Viernes\n");
        break;
    case 6:
        printf("Hoy es Sabado\n");
        break;
    case 7:
        printf("Hoy es Domingo\n");
        break;
    default:
        printf("No hay dia %d\n", numero);
        break;
    }

    char letra;
    printf("\nIngrese una letra: ");
    scanf(" %c", &letra); // Nota el espacio antes de %c para ignorar saltos de línea previos

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Es vocal\n");
        break;

    default:
        printf("Es consonante\n");
        break;
    }
    // Uso de constantes y macros
    int suma, a, b;
    a = 3;
    suma = a + PI; // Uso de la constante
    printf("La Suma es es: %d\n", suma);
    b = 4;
    printf("El cubo de la variabe es: %i\n", CUBO(b));
    getchar();
    return 0;
}
