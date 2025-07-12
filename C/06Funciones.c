#include <stdio.h>

int calcularArea(int base, int altura);

int main()
{
    // Funciones
    int base, altura, area;
    printf("Ingrese base: \n");
    scanf("%d", &base);
    printf("Ingrese altura: \n");
    scanf("%d", &altura);
    area = calcularArea(base, altura); // Llamado de funcion
    printf("El area es %d", area);
    return 0;
}

/*
    Funcion que calcula el area de un triangulo
    Args:
        - Base
        - Altura

    Return:
        - Area
    */
int calcularArea(int base, int altura)
{
    int area;
    area = (base * altura) / 2;
    return area;
}