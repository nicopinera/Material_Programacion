#include <stdio.h>

/*Se establece el tipo de retorno al principio de la funcion
Si es void no se retorna nada*/

int num3 = 2; // Variable global
void saludo();
int calcularArea(int base, int altura);
int factorial(int n); // Funcion recursiva

int main()
{
    int a, f, base, altura, area;
    saludo();
    printf("Igrese el valor a calcular su factorial: \n");
    scanf("%d", &a);
    f = factorial(a);
    printf("Factorial: %d\n", f);

    // Funciones
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

void saludo()
{
    // Void -> No retorna valores
    printf("Hola como estas? \n");
}

// Funcion recursiva
int factorial(int n)
{
    int f;
    if (n == 0)
    {
        return 1;
    }
    f = n * factorial(n - 1);
    return f;
}
/* Otra forma de utilizarlo
long Factorial(long numero){
    if(numero<=1){
        return 1;
    }else{
        return(numero*Factoria(numero-1));
    }
}*/