package c02_Operadores;

/*1. Constantes de Math
 * - PI
 * - E
 * 
 * 2. Redondeo y truncamiento
 * - ceil(): redondea hacia arriba
 * - floor(): readondea hacia abajo
 * - round(): redondea comun
 * 
 * 3. Potencia y Raiz
 * - pow(): eleva un numero a su potencia
 * - sqrt(): calcula la raiz cuadrada
 * - cbrt(): calcula la raiz cubica
 * 
 * 4. Funciones Trigonometricas e hiperbolicas
 * - toRadians(): Convierte de grados a radianes
 * - toDegrees(): Convierte de radianes a grads
 * - atan2(): Angulo polar con coordenadas x e y
 * - sin(): seno en radianes
 * - cos(): coseno en radianes
 * - tan(): tangente en radianes
 * - asin(): arco seno en radianes
 * - acos(): arco coseno en radiantes
 * - atan(): arco tangente en radianes
 * - sinh(): seno hiperbolico
 * - cosh(): coseno hiperbolico
 * - tanh(): tangente hiperbolica
 * 
 * 5. Generacion de numeros aleatorios
 * - random(): Genera numeros aleatorios entre 0 y 1
 * 
 * 6. Coparacion y seleccion de valores
 * - min(): menor entre dos numeros
 * - max(): mayor entre dos numeros
 * - abs(): valor absoluto de un numero
 * 
 * 7. Exponenciacion y logaritmos
 * - exp(): calcula e^numero
 * - log(): logaritmo natural
 * - log10(): logaritmo base 10
 */

public class Matematica {
    public static void main(String[] args) {
        System.out.println("Constantes: ");
        System.out.println("PI: " + Math.PI);
        System.out.println("E: " + Math.E);

        var base = 5;
        var exponente = 3;
        System.out.println(base + "^" + exponente + "= " + Math.pow(base, exponente));

        var raiz = 25;
        System.out.println("Raiz cuadrada de " + raiz + "= " + Math.sqrt(raiz));
        System.out.println("Raiz cubica de " + raiz + "= " + Math.cbrt(raiz));

        var grados = 30;
        var radianes = Math.toRadians(grados);
        System.out.println("sin(" + grados + ") = " + Math.sin(radianes));
        System.out.println("cos(" + grados + ") = " + Math.cos(radianes));
        System.out.println("tan(" + grados + ") = " + Math.tan(radianes));
        System.out.println("asin(" + grados + ") = " + Math.asin(radianes));
        System.out.println("acos(" + grados + ") = " + Math.acos(radianes));
        System.out.println("atan(" + grados + ") = " + Math.atan(radianes));

        System.out.println("Numero aleatorio entre 0 y 1: " + Math.random());
        System.err.println("Numero aleatorio entre 0 y 100: " + Math.random() * 100);

        var a = (int) (Math.random() * 10);
        var b = (int) (Math.random() * 10);
        System.out.println("Mayor entre " + a + " y " + b + "= " + Math.max(a, b));
        System.out.println("Menor entre " + a + " y " + b + "= " + Math.min(a, b));

        System.out.println("e^" + a + "= " + Math.round(Math.exp(a)));
        System.out.println("ln(" + a + ")= " + Math.round(Math.log(a)));
        System.out.println("log10(" + a + ")= " + Math.round(Math.log10(a)));

    }
}
