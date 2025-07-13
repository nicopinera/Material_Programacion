#include <stdio.h>
#define TAMANIO 5
#define NUM 15
int main()
{
    /*
    Arreglos:
    Vector de valores, se empieza desde el indice 0
    Conjunto de datos que se almacenan el una variable
    Entidad estatico, no cambia de tamaño durante la ejecucion
    */

    // Declaracion, se dicen los elementos o se establece el tamaño
    // int numeros[10]; // Arreglo de 10
    int numeros2[TAMANIO];
    int numeros3[TAMANIO][TAMANIO]; // Matriz
    // int numeros3[] = {0,1,2,3,4,5};
    // Cargar valores
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("Ingrese el valor %d: ", i);
        scanf("%d", &numeros2[i]);
    }
    // Mostrar arreglo
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("\narreglo[%d]=%d", i, numeros2[i]);
    }
    for (int i = 0; i < TAMANIO; i++)
    {
        for (int j = 0; j < TAMANIO; j++)
        {
            printf("Ingrese el valor [%d][%d]:", i, j);
            scanf("%d", &numeros3[i][j]);
        }
    }
    // Mostrar una matriz por columnas
    printf("\nMatriz ingresada:\n\n");
    for (int i = 0; i < TAMANIO; i++)
    {
        for (int j = 0; j < TAMANIO; j++)
        {
            printf("%5d", numeros3[i][j]); // ancho fijo para alineación
        }
        printf("\n");
    }
    /* Mostrar una matriz fila a fila
        for (int i = 0; i < TAMANIO; i++)
        {
            for (int j = 0; j < TAMANIO; j++)
            {
                printf("\nMatriz[%d][%d]=%d", i, j, numeros3[i][j]);
            }
        }
    */

    // String = Arreglo
    char apellido[NUM] = {'P', 'i', 'n', 'e', 'r', 'a'};
    char nombre[NUM] = "Nicolas";
    printf("%s\n", apellido);
    printf("%s\n", nombre);

    // Puts y Gets
    char nombre2[NUM];
    gets(nombre2); // Pide valor
    puts(nombre2); // Muestra los valores

    return 0;
}