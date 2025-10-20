/* Todo se encapsula dentro de una clase
 * 
 * Nombramiento: CamelCase para el nombre de las clases
 * 
 * El metodo main es el punto de entrada de la aplicacion
 * 
 * Lo Comun es tener una clase main con su metodo para ejecutar todo
 * el proyecto
 * 
 * Modificadores: 
 * public: modificador de acceso
 * static: se puede ejecutar sin crear una instancia de la clase
 * void: no devuelve nada la funcion
 * 
 * 
*/

public class HolaMundo {
    public static void main(String[] args) {

        System.out.println("Hola Mundo"); // Mostrar por pantalla

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
