#include <stdio.h>
// Variables

int main()
{
    char C = 'y';               // Tamaño de 1 byte, va de 0 a 255
    int a = 20;                 // Tamaño de 2 byte va de -32768 a 32767
    short e = -1;               // tamaño de 2 byte va de -128 a 127 - entero corto
    unsigned int u = 25;        // tamaño de 2 byte va de 0 a 65535 - entero sin signo
    long l = 577849;            // tamaño de 4 byte - va de -2147483648 a 2147483647
    float f = 72.534;           // Real con punto flotante - tamaño 4 byte
    double d = 21071541.172847; // 8 byte

    printf("Caracter: %c\n", C);
    printf("Entero: %d\n", a);
    printf("Short o entero corto: %i\n", e);
    printf("Entero sin signo: %i\n", u);
    printf("Long o entero largo: %li\n", l);
    printf("Real con o sin punto flotante: %.2f\n", f);        // Redondeado a dos decimales
    printf("Real largo con o sin punto flotante: %.2lf\n", d); // long float
    printf("-----------------------------------------");
    // Palabras reservadas y conversion de tipos de datos (casting)
    // Existen 32 palabras reservadas en C
    int b = 80; // cuando se pasa a char hay que ver el valor en ascii
    printf("entero:%i\nflotante: %.2f\ndouble: %.2f\ncaracter: %c", b, (float)b, (double)b, (char)b);
    float z = 80.5;
    float suma = (float)b + z;

    // Se establece el operador SizeOf para devolver el tamaño en bytes de una variable o arreglo
    float array[20];
    // int a = 0;
    printf("\nTamano en byte: %lu \n", sizeof(array));
    // printf("Tamaño en byte: %lu \n",sizeof(a));
    return 0;
}