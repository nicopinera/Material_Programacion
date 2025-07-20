package c02_Operadores;

/* Los operadores nos permiten realizar operaciones entre variables
 * 0. Asignacion de valores (=) 
 * 1. Aritmeticos
 * - Suma (+)
 * - Resta (-)
 * - Multiplicacion (*)
 * - Division (/): Devuelve el resultado segun el tipo de dato de los operandos
 * - Modulo o Residuo (%): Devuelve el resto de la division
 * 
 * 2. Logicos, relacionales y Booleanos
 * - Mayor que (>)
 * - Menor que (<)
 * - Mayor o igual que (>=)
 * - Menor o igual que (<=)
 * - Distinto que (!=)
 * - Igual que (==): Compara valores, no objetos
 * - AND (&&)
 * - OR (||)
 * 
 * 3. Incremento o Decremento
 * - Incremento (++): Incrementa en 1
 * - Decremento (--): Decrementa en 1
 * - Incremento (+=n): Incrementa en N
 * - Decremento (-=n): Decrementa en N
 * 
 * 4. Concatenar cadenas (+): Se aplica con textos
*/
public class operadores {
    public static void main(String[] args) {
        var a = 5.0;
        var b = 3;
        // Operadores Aritmeticos
        System.out.println("---------------------");
        System.out.println("OPERADORES ARITMETICOS");
        System.out.println("Suma: " + (a + b));
        System.out.println("Resta: " + (a - b));
        System.out.println("Multiplicacion: " + (a * b));
        System.out.println("Division: " + (a / b));
        System.out.println("Resto: " + (a % b));

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
