package c05_estructurasDatos;

import java.util.HashMap;

public class Mapas {
    public static void main(String[] args) {
        /*
         * Mapas:
         * Almacena pares - Clave y valor
         * Se accede a traves de la clave y obtenemos el valor
         * Se guarda de manera desordenada
         * el hash se genera a traves de la clave
         */

        // declaracion <K,V>
        HashMap<String,String> nombre = new HashMap<>();
        var numeros = new HashMap<Integer, String>();

        // Tamaño
        System.out.println(nombre.size());
        System.out.println(numeros.size());

        // elementos
        nombre.put("Nicolas", "nicolaspinera@gmail.com");
        nombre.put("Octavio", "octavio@gmail.com");
        nombre.put("Juan cruz", "jc@gmail.com");
        System.out.println(nombre.size());
        System.out.println(nombre);

        //acceder elementos
        System.out.println(nombre.get("Nicolas"));

        // verificar por clave
        System.out.println(nombre.containsKey("Nicolas"));

        //eliminar
        nombre.remove("Octavio"); // Elimina por clave
    }
}
