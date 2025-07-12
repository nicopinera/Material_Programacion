#include <stdio.h>
#define PI 3.14; // Se declara una constante
int main()
{
    /*
    Caracteres de modificacion: Sirve para identificar con que tipo de dato se trabaja
    - %c : Caracter
    - %d : Entero
    - %u : Entero sin signo en base decimal
    - %o : Entero en base octal
    - %x : Entero en base Hexadecimal
    - %e : Un numero real en coma flotante con exponente
    - %f : n numero real en coma flotante sin exponente
    - %s : Una cadena de caracteres
    - %p : Puntero o direccion de memoria
     */
    int edad = 43;
    int edad2 = 15;
    printf("Entero: %d - %d\n", edad2, edad);

    float sueldo = 15.456;
    float bono = 4.560;
    sueldo += bono;
    printf("Flotante: %f", sueldo);

    return 0;
}