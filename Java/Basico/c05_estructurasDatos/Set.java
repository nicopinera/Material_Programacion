package c05_estructurasDatos;

import java.util.HashSet;

public class Set {
    public static void main(String[] args) {
        // Set
        /*
         * Estructura que almacena datos unicos sin duplicados
         * Guarda los elementos de forma desordenada
         * Busca datos de manera mas rapida
         * Genera claves en funcion del valor, por eso no permite duplicados
         */

        // declaracion
        HashSet<String> nombres = new HashSet<>();
        var numeros = new HashSet<Integer>();

        // tamaño
        System.out.println(nombres.size());
        System.out.println(numeros.size());

        nombres.add("Nicolas");
        nombres.add("Moure");
        nombres.add("Brais");
        nombres.add("BraisMoure");

        System.out.println(nombres);

        // eliminar elementos
        nombres.remove("Nicolas");

        // buscar elementos
        var contiene = nombres.contains("Nicolas");
        System.out.println(contiene);

        var paises = new HashSet<String>();
        paises.add("España");
        paises.add("Mexico");
        paises.add("Argentina");
        nombres.addAll(paises); // Agregar
        System.out.println(nombres);

        nombres.removeAll(paises);
        System.out.println(nombres);

        nombres.retainAll(paises); // Deja los elementos que no son comunes

    }
}
