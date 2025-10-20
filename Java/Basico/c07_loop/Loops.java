package c07_loop;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public class Loops {
    public static void main(String[] args) {
        // Bucles
        /*
         * Hay diferentes tipos de bucles
         * 1. for -> controlado por un contador
         * 2. foreach -> bucle para recorrer diferentes estructuras
         * 3. while -> se repite mientras la condicion es verdadera
         * 4. do-while -> se ejeucta una vez por lo menos
         * 
         * Para controlar los bucles tenemos
         * 1. break; -> Se rompe o sale del bucle
         * 2. continue; -> saltea el paso del bucle, se mantiene el bucle, lo que sigue
         * no se ejecuta, fuerza la proxima ejecucion
         */

        for (int i = 0; i < 10; i++) { // contador - condicion - incremento/decremento
            System.out.println("Hola, esto es un bucle for: " + (i + 1));
        }

        // Mostrar un array por un for
        String[] nombres = { "Brais", "Nico", "Juan" };
        for (int i = 0; i < nombres.length; i++) {
            System.out.println(i + ") Nombre: " + nombres[i]);
        }

        // for-each -> para cada uno de los elementos
        for (String s : nombres) { // Tipo valor_auxiliar : estructura_a_recorrer
            System.out.println(s);
        }

        HashSet<Integer> numeros = new HashSet<>();
        numeros.add(1);
        numeros.add(2);
        numeros.add(3);
        numeros.add(4);
        numeros.add(5);
        for (Integer i : numeros) {
            System.out.println(i);
        }
        HashMap<String, String> emails = new HashMap<>();
        emails.put("Nicolas", "nicolaspinera@gmail.com");
        emails.put("Octavio", "octavio@gmail.com");
        emails.put("Juan cruz", "jc@gmail.com");
        // Con mapas
        for (Map.Entry<String, String> mail : emails.entrySet()) {
            // mail es una clave string,string para poder acceder al mapa, que se tranforma
            // en set
            // mail la puedo trabajar como un mapa
            System.out.println("Usuario: " + mail.getKey());
            System.out.println("Mail: " + mail.getValue());
        }

        // while
        int index = 0;
        while (index < 5) {
            System.out.println("Hola while");
            index++;
        }

        index = 0;
        do {
            System.out.println("hola do while");
            index++;
        } while (index < 5);
        index = 0;
        boolean contiene = false;
        do {
            System.out.println(nombres[index]);
            if (nombres[index].equals(("Nico"))) {
                contiene = true;
            }
            index++;
        } while (!contiene);

        // Control de bucles
    }
}
