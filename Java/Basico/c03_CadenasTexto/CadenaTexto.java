package c03_CadenasTexto;

public class CadenaTexto {
    public static void main(String[] args) {
        // Cadenas de texto - String

        // Cadena de texto = secuencia de caracteres
        // No es un tipo de dato primitivo, es una clase, forma parte del propio
        // lenguaje

        // Declaracion de un String
        String nombre = "Nico";

        // Como es una clase, se puede intanciar con el constructor de la clase
        var apellido = new String("Piñera");

        // Operaciones basicas
        System.out.println(nombre); // Mostrarlo por pantalla
        System.out.println(nombre + " " + apellido); // Concatenacion

        // Logitud
        System.out.println("Longitud del string: " + nombre.length());

        // Obtener caracter
        // Devuelve el caracter en la posicion i
        // Empieza en 0 a length-1
        var i = 1;
        System.out.println("Caracter en " + i + ": " + nombre.charAt(i));
        System.out.println("Caracter en " + (nombre.length() - 1) + ": " + nombre.charAt(nombre.length() - 1));

        // Subcadena
        // Desde el indice hasta el final
        i = 2;
        System.out.println("Cadena desde 2 hasta el final: " + nombre.substring(i));

        // desde el indice inicial hasta el indice final (Se excluye el indice final)
        System.out.println("Cadena desde 2 hasta (4-1): " + nombre.substring(2, 4));

        // Mayusculas y minusculas
        System.out.println("MAYUSCULAS: " + nombre.toUpperCase());
        System.out.println("minusculas: " + nombre.toLowerCase());

        // Comprobar si tiene algo
        // Tiene que ser una coincidencia total
        // Suele pasarse todo a mayusculas para comprobar y evitar errores
        System.out.println("Hola,java".contains("Nico"));
        System.out.println("Hola,java".contains("ava"));
        System.out.println("Hola,java".contains("AVA"));

        // Comparacion:
        System.out.println(nombre.equals("Nico"));
        System.out.println(nombre.equals(apellido));
        // Ignora mayusculas o minusculas
        System.out.println(nombre.equalsIgnoreCase("NICO"));

        // Limpieza
        System.out.println(" Hola, me llamo Dios ".trim()); // Elimina los espacios al principio y al final

        // Remplazar caracteres especificos
        System.out.println(" Hola, me llamo Dios ".replace(" ", "@"));
        System.out.println("Programa terminado");

        // Format
        var edad = 22;
        // %s para string - %d para numeros - %f para float
        String.format("Hola, %s. tengo %d.", nombre, edad);

        // -----------
        String cadena1 = "Hola";
        String cadena2 = "Chau";
        String cadena3 = cadena1 + " - " + cadena2; // Concatenacion
        var longitudCadena3 = cadena3.length(); // Longitud
        System.out.println(cadena3.charAt(0)); // Primer caracter
        System.out.println(cadena3.charAt(longitudCadena3 - 1)); // ultimo Caracter
        System.out.println(cadena3.toLowerCase()); // Minusculas
        System.out.println(cadena3.toUpperCase()); // Mayusculas
    }
}
