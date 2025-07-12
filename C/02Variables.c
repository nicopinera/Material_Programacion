#include <stdio.h>
// Variables

int main()
{
    char C = 'y';              // Tamaño de 1 byte, va de 0 a 255
    int a = 20;                // Tamaño de 2 byte va de -32768 a 32767
    short e = -1;              // tamaño de 2 byte va de -128 a 127 - entero corto
    unsigned int u = 25;       // tamaño de 2 byte va de 0 a 65535 - entero sin signo
    long l = 577849;           // tamaño de 4 byte - va de -2147483648 a 2147483647
    float f = 72.534;          // Real con punto flotante - tamaño 4 byte
    double d = 21071541.172847; // 8 byte
    
    printf("%c\n", C);
    printf("%d\n", a);
    printf("%i\n", e);
    printf("%i\n", u);
    printf("%li\n", l);
    printf("%.2f\n", f);  // Redondeado a dos decimales
    printf("%.2lf\n", d); // long float
    return 0;
}