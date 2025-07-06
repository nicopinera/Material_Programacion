package c05_estructurasDatos;

public class EstructurasDatos {
    public static void main(String[] args) {

        // Estructura de datos
        // Nos sirven para guardar mas de un dato

        // Array

        // Declaracion y creacion
        int[] numero = new int[3]; // Array de enteros - Le establezco la longitud
        System.out.println(numero); // Muestra la direccion de memoria
        System.out.println(numero.length); // Longitud

        String[] nombres = { "Brais", "Nico", "Juan" };
        System.out.println(nombres[0]); // Acceso
        System.out.println(nombres[1]);
        System.out.println(nombres[2]);
        System.out.println((new String[3])[2]);

        // Modificacion
        numero[0] = 12;
        numero[1] = 15;
        System.err.println(numero[0]);
        System.out.println(numero[1]);

        // Limpieza
        numero[0] = 0;
        nombres[0] = null;

    }

}
