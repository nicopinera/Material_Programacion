#include <stdio.h>
#include <stdlib.h> //para utilizar maloc
#include <string.h> // para trabajar con string
/*Memoria dinamica
Se asigna de manera dinamica para ahorrar memoria

cuando se hace referencia a un puntero de una estructura se hace de la siguiente manera
dog es la estructura y p_dog es el puntero dentro de la estructura
dogs -> p_dog

fget(puntero,tamañoArreglo,dondeSeOptiene)
fget(dogs[i].nombre,20,stdin); -> forma segura de obtener datos
Los espacios no se toman como final de cadena
*/
int main()
{

    int n = 10;
    char *p;
    p = malloc(n * sizeof(char)); // Nos permite reservar memoria
    if (NULL == p)
    {
        printf("Error al asignar memoria \n");
    }
    else
    {
        printf("Se asigno memoria\n");
        free(p); // libera la memoria
    }

    return 0;
}