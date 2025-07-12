#include <stdio.h>
#include <ctype.h> // trabajar con string
/*
Punteros
Variable que contiene la direccion de memoria de un dato
o de otra variable que contiene ese dato
Significa que apunta al espacio fisico del dato o variable

scanf("",&variable)
el & se usa para acceder a la direccion de la memoria de esa variable
*/
int main(){
    int num;
    // Declaracion
    int *puntero1;
    num = 100;
    puntero1 = &num; // toma la direccion de memoria de num
    printf("La direccion de memoria: %p",puntero1);
    printf("\nEl valor es: %d",*puntero1);

    char cadena[80],*pcadena;
    puts("Ingrese una cadena en mayusculas: ");
    gets(cadena);
    pcadena = cadena;
    puts("La cadena en minusculas es: ");
    while (*pcadena != '\0')
    {
        printf("%c",tolower(*pcadena++));
    }
    
    return 0;

}