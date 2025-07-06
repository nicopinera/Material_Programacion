package c02_Operadores;

public class operadores {
    /*
     * Definicion de una funcion:
     * public static void suma(int a, int b){
     * var suma = a + b;
     * System.out.println("Suma= " + suma);
     * }
     */
    // Los operadores nos permiten realizar operaciones entre variables
    public static void main(String[] args) {
        var a = 5.0;
        var b = 3;
        // Operadores Aritmeticos
        // suma(a,b);
        System.out.println("---------------------");
        System.out.println("OPERADORES ARITMETICOS");
        System.out.println("Suma: " + (a + b));
        System.out.println("Resta: " + (a - b));
        System.out.println("Multiplicacion: " + (a * b));
        System.out.println("Division: " + (a / b)); // Da el resultado segun el tipo de dato
        System.out.println("Resto: " + (a % b)); // Modulo: Da el resto de la suma

        System.out.println("---------------------");
        System.out.println("OPERADORES ASIGNACION");
        // Operadores de asignacion
        // Asigna valores a las variables
        a = 10;
        System.out.println("Valor de a: " + a);

        a = b + 1;
        System.out.println("Valor de a: " + a);

        a += 1; // Suma
        System.out.println("Valor de a: " + a);

        a -= 1; // Resta
        System.out.println("Valor de a: " + a);

        a *= 2; // Multiplicacion
        System.out.println("Valor de a: " + a);

        a /= 3; // Division
        System.out.println("Valor de a: " + a);

        a %= 2; // Modulo
        System.out.println("Valor de a: " + a);

        System.out.println("---------------------");
        System.out.println("OPERADORES COMPARACION (RELACIONALES)");
        // Devuelven verdadero o falso
        System.out.println("a = b ?: " + (a == b)); // Igual
        System.out.println("a = 6 ?: " + (a == 6));
        System.out.println("a != b ?: " + (a != b)); // Desigualdad o distinto
        System.out.println("a < b ?: " + (a < b)); // Menor que ...
        System.out.println("a <= b ?: " + (a <= b)); // Menor o igual que ...
        System.out.println("a > b ?: " + (a > b)); // Mayor que ...
        System.out.println("a => b ?: " + (a >= b)); // Mayor o igual que ...

        System.out.println("---------------------");
        System.out.println("OPERADORES LOGICOS");
        // Combinan valores booleano
        System.out.println("AND (Y) Logico - TABLA DE VERDAD");
        System.out.println("True && True: " + (false && true));
        System.out.println("True && Falso: " + (true && false));
        System.out.println("Falso && True: " + (false && true));
        System.out.println("Falso && Falso: " + (false && false));
        System.err.println(3 > 2 && 5 == 2);

        System.out.println("OR (O) Logico - TABLA DE VERDAD");
        System.out.println("True || True: " + (false || true));
        System.out.println("True || Falso: " + (true || false));
        System.out.println("Falso || True: " + (false || true));
        System.out.println("Falso || Falso: " + (false || false));
        System.err.println(3 > 2 || 5 == 2);

        System.out.println("NOT (NO) Logico - TABLA DE VERDAD");
        System.out.println("!True: " + (!true));
        System.out.println("!False: " + (!false));

        System.out.println("---------------------");
        System.out.println("OPERADORES UNARIOS");
        // Aplican sobre un solo valor o variable

        System.out.println("Valor positivo de b: " + (+b));
        System.out.println("Valor negativo de b: " + (-b));

        b++;
        System.out.println("Valor de b + 1: " + b);

        b--;
        System.out.println("Valor de b -1: " + b);
        System.out.println("---------------------");
        
    }

}
