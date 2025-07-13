#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
} perro1 = {"Chicorita", 10, 5.50}, // Definir dos o mas
    perro2 = {"JuanCarlos", 29, 6.6},
  perros[3];

int main()
{
    /*Estructuras
    Coleccion de elementos de diferentes tipos

    Se pueden anidar las estructuras:

    struct owner{
        char nombre[20];
    };
    struct perro{
        char nombre[20];
        struct owner ownerDog;
    }perro1;
    perro1.ownerDog.nombre; -> Forma de acceder a la estructura anidad
    */

    printf("El nombre de mi mascota es: %s\n", perro1.nombre);
    printf("La edad en meses de mi mascota es: %i\n", perro1.edadMeses);
    printf("El peso de mi mascota es: %.2f\n", perro1.peso);

    /*Arreglo de estructuras
    permite almacenar en un arreglo variables del tipo struct
    */
    for (int i = 0; i < 3; i++)
    {
        printf("\n%i) Ingrese el nombre del perro: ", i + 1);
        scanf("%s", perros[i].nombre);

        printf("%i) Ingrese la edad del perro: ", i + 1);
        scanf("%i", &perros[i].edadMeses);

        printf("%i) Ingrese el peso del perro: ", i + 1);
        scanf("%f", &perros[i].peso);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%i) Nombre: %s \n", i + 1, perros[i].nombre);
        printf("%i) Edad: %i \n", i + 1, perros[i].edadMeses);
        printf("%i) Peso: %.2f \n", i + 1, perros[i].peso);
    }

    return 0;
}