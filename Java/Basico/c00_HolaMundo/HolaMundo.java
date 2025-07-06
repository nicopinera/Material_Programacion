package c00_HolaMundo;

// Todo se encapsula dentro de una clase
// Nombramiento: CamelCase para el nombre de las clases
public class HolaMundo {

    /*
     * public: modificador de acceso
     * static: se puede ejecutar sin crear una instancia de la clase
     * void: no devuelve nada la funcion
     */

    // El método main es el punto de entrada de la aplicación
    public static void main(String[] args) {
        // Mostrar por pantalla
        System.out.println("Hola Mundo");

        // Comentario de una sola linea

        /*
         * Comentario
         * de
         * varias
         * lineas
         */

        // \n para hacer un salto de linea
        System.out.println("Hola \nMundo");

        System.out.println("Mi edad es: " + 22);
        System.out.println("Mi color favorito es el rojo");
        System.out.println("Vivo en Cordoba Argentina");
    }
}
