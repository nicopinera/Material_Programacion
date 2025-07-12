#include <stdio.h>
int main()
{
    // Bucles
    int contador = 0;
    /*
    El do-while ejecuta el codigo por lo menos una vez
    El while ejecuta si se cumple la condicions
    Bucle for para trabajo con contadores y se cuantas veces se va a ejecutar
    */
    // Bucle do-while
    do
    {
        printf("\n%d", contador);
        contador++;
    } while (contador < 10);

    printf("\n");

    float ventaCliente, ventaTotal = 0;
    do
    {
        printf("Ingrese una venta: ");
        scanf("%f", &ventaCliente);
        ventaTotal += ventaCliente;
    } while (ventaCliente != 0);
    printf("La venta total del dia es: %.2f", ventaTotal);

    // Bucle while
    while (contador < 100)
    {
        contador += 10;
        printf("\n%d", contador);
    }

    // Bucle for
    for (int cont = 0; cont < 3; cont++)
    {
        printf("Contador: %d \n", cont);
    }
    int notas, promedio, sumaNotas = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Nota %d) Ingrese la nota:", i);
        scanf("%d", &notas);
        sumaNotas += notas;
    }
    promedio = sumaNotas / 10;
    printf("El promedio total de notas es: %d", promedio);

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d es Par\n", i);
        }
        else
        {
            printf("%d es Impar\n", i);
        }
    }

    return 0;
}
