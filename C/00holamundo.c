// Hola mundo
#include <stdio.h> //Directiva obligatoria

// F6 para compilar y ejecutar
// F8 para otra terminal

/* Funcion main inicia la ejecucion del programa*/
int main()
{
    printf("Hola mundo\n");
    // Comentario de 1 Linea

    /*
    Comentarios de
    varias lineas
    */

    /*
    Secuencias de escape: Nos ayudan a modificar el mensaje que se quiere mostrar
    - \0 : Nulo
    - \b : Retroceso
    - \t : Tabulador
    - \n : Salto de linea
    - \f : Salto de Pagina
    - \r : Retorno de carro
    - \" : Comillas
    - \? : Signo de interrogacion
    - \\ : Barra Invertida
    */
    printf("\n Salto de linea");
    printf("\n \t Tabulacion");
    printf("\n \"Comillas\"");
    // printf("\n Nulo \0");
    printf("\n Retroceso \b");
    printf("\n \f Salto de pagina");
    printf("\n Retorno de Carro \r");
    printf("\n Signo de interrogacion \?");
    printf("\n Barra invertida \\");

    getchar(); // Para que no se cierre automaticamente

    return 0; // Fin del programa
}
