#include <stdio.h>
#include <ctype.h> // trabajar con string
/*
Punteros
Variable que contiene la direccion de memoria de un dato
o de otra variable que contiene ese dato
Significa que apunta al espacio fisico del dato o variable

scanf("",&variable)
el & se usa para acceder a la direccion de la memoria de esa variable

Existen dos formas de pasar parametros a una funcion
a traves de valores o a traves de referencias de memoria
*/

void cubo(int *a);
size_t getsize(float *ptr) { return sizeof(ptr); }
int main()
{
    int num = 100;

    // Declaracion
    int *puntero1;

    // Asignacion del lugar de memoria
    puntero1 = &num; // toma la direccion de memoria de num

    printf("La direccion de memoria: %p", puntero1);
    printf("\nEl valor es: %d", *puntero1);

    char cadena[80], *pcadena;
    puts("Ingrese una cadena en mayusculas: ");
    gets(cadena);
    pcadena = cadena;
    puts("La cadena en minusculas es: ");
    while (*pcadena != '\0')
    {
        printf("%c", tolower(*pcadena++));
    }

    int numero = 5;
    printf("\n%i\n", numero);
    cubo(&numero); // Referencia de memoria de la variable numero
    printf("Nuevo valor: %i\n", numero);

    float array[20];
    printf("Numero de byte que ocupa el array: %lu \n", sizeof(array));
    printf("Numero de byte que ocupa el array: %lu \n", getsize(array));
    return 0;
}

// Trabajo por referencia
// trabajo con el valor que guarda
void cubo(int *a)
{
    *a = *a * *a * *a;
}
