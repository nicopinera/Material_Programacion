package c05_estructurasDatos;

import java.util.ArrayList;

public class Lista {
    public static void main(String[] args) {
        // ArrayList
        /*
         * Estructura dinamica
         * Sin espacio predefinido
         * se pueden manipular los objetos
         */

        // Declaracion
        // <Tipo de dato>
        ArrayList<String> nombre = new ArrayList<>(); // clasica
        var numeros = new ArrayList<Integer>(); // moderna

        // no puedo usar datos primitivos
        // Todos tiene equivalente a clases
        // int -> Integer
        // float -> Float
        // double -> Double

        // Tamaño
        System.out.println("Tamaño: " + nombre.size());
        System.out.println("Tamaño: " + numeros.size());

        // Añadir elementos
        // Se añaden por orden de llegada
        nombre.add("Nicolas"); //
        nombre.add("Juan");
        nombre.add("Abdias");
        System.out.println("Tamaño: " + nombre.size());

        // Acceder a los elementos
        System.out.println(nombre.getFirst()); // Obtener el primero
        System.out.println(nombre.getLast()); // Obtener el ultimo
        System.out.println(nombre.get(1)); // Acceder a un indice especifico

        // Modificar un valor
        nombre.set(1, "nicolaspinera@gmail.com");
        System.out.println(nombre.get(1));

        // eliminar
        nombre.remove(2);

        // buscar
        System.out.println(nombre.contains("Nico"));

        // limpiar
        nombre.clear();

    }

}
