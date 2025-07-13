#include <stdio.h>
#include <stdlib.h>

// typedef permite crear sinonimos para estructuras
typedef struct nodo
{
    // Se crea con memoria dinamica

    char *nombre;
    struct nodo *sig; // apunta al siguiente nodo - vinculo para unir nodos
} Libro;

Libro *listaLibro(Libro *Lista)
{ // Devuelve un puntero de tipo Libro
    Lista = NULL;
    return Lista;
}

Libro *agregarLibro(Libro *Lista, char *nombre)
{
    Libro *nuevoLibro, *aux;                     //*nuevoLibro es el nodo
    nuevoLibro = (Libro *)malloc(sizeof(Libro)); // Guardado de memoria
    nuevoLibro->nombre = nombre;                 // Se accede al puntero y se establece el nombre
    nuevoLibro->sig = NULL;                      // Se establece el siguiente
    if (Lista == NULL)
    {
        Lista = nuevoLibro; // Primer valor
    }
    else
    { // Agregado al final
        aux = Lista;
        while (aux->sig != NULL)
        {
            aux = aux->sig; // Desplazo al siguiente nodo de la lista
        }
        aux->sig = nuevoLibro;
    }
    return Lista;
}
int main()
{
    /*Listas enlazadas
    son colecciones de estructuras autoreferenciadas
    llamadas nodos, se puede modificar en tiempo de ejecucion
    Contiene un miembro apuntador que apunta a algo del mismo tipo
    */
    Libro *Lista = listaLibro(Lista);
    Lista = agregarLibro(Lista, "HTML5 avanzado");
    Lista = agregarLibro(Lista, "CSS3 avanzado");
    Lista = agregarLibro(Lista, "CSS3 avanzado");
    Lista = agregarLibro(Lista, "CSS3 avanzado");
    Lista = agregarLibro(Lista, "CSS3 avanzado");
    while (Lista != NULL)
    {
        printf("%s\n", Lista->nombre);
        Lista = Lista->sig;
    }
    return 0;
}