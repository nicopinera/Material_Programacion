package c01_DatosYVariables;

public class TiposDatos {
    // int miEntero2; fuera del metodo
    public static void main(String[] args) {
        // Tipos de Datos Primitivos

        // Int = Enteros
        int miInt = 37; // Tipo de datos enteros
        System.out.println("Dato entero - int: " + miInt);

        // No se puede acceder porque la variable no es Static
        // System.out.println(miEntero2);

        // Double = Numeros con coma o de gran tamaño
        double miDouble = 1.74;
        System.out.println("Dato Double - double: " + miDouble);

        // float, long, byte - otros tipos de datos numericos

        // char = caracteres
        // se guarda en comillas simples
        char miChar = 'a';
        System.out.println("Dato Caracter - char: " + miChar);

        // Boolean = Booleano - Solo valores True and False
        boolean miBoolean = true;
        System.out.println("Dato Booleano - boolean: " + miBoolean);

        // String no es primitivo, es una clase
        String miString = "Hola mundo";
        System.out.println(miString);

        // Tipo de dato en tiempo de compilacion
        /*
         * Con todos los tipos de datos podemos trabajar con las clases (empiezan en
         * mayusculas)
         * 
         */
        System.out.println("Tipo de dato: " + miString.getClass().getSimpleName());

        System.out.println("---------------------------");
        String nombre = "Nicolas";
        System.out.println("Mi nombre es: " + nombre);

        int edad = 22;
        System.out.println("Mi edad es: " + edad);

        double altura = 1.74;
        System.out.println("Mi altura es: " + altura);

        boolean programas = false;
        System.out.println("Programo:" + programas);

        final String MAIL = "nicolaspinera@gmail.com";
        System.out.println("Mail: " + MAIL);

        char inicial = 'N';
        System.out.println("Mi inicial: " + inicial);

        String localidad = "Cordoba";
        System.out.println("Mi localidad: " + localidad);

        int a = 5;
        int b = 6;
        int c = a + b;
        System.out.println("Valor a: " + a + "- Valor b: " + b + "- Suma: " + c);
        System.out.println("---------------------------");
        System.out.println("Programa Terminado");

    }
}
