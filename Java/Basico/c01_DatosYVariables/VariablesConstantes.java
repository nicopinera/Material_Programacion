package c01_DatosYVariables;

/*Variables: espacio almacenado en memoria para almacenar un valor, puede variar en tiempo de ejecucion
 * Declaracion de Variable: TipoDto NombreVariable = Valor;
 *
 * Constante: espacio almacenado en memoria para almacenar un valor que no varia en tiempo de ejecucion
 * Declaracion de Constante: final TipoDato NombreVariable = Valor; 
 */

public class VariablesConstantes {
    public static void main(String[] args) {
        // Variables

        // Declaracion
        byte edad1;

        // Declaracion e inicializacion multiples
        int operador1 = 7, operador2 = 8, resultado = operador1 + operador2;

        // inicializacion
        edad1 = 17;

        // Declaracion e inicializacion
        byte edad2 = 18;

        System.out.println(edad1 + edad2);

        // Variable String o Texto
        String nombre = "Nicolas"; // TipoDato NombreVariable = Valor
        System.out.println(nombre);

        nombre = "Beto"; // Cambio de valor
        System.out.println(nombre);

        // Variable entera
        int edad = 22;
        System.out.println("Mi edad es: " + edad);

        // var asigna el tipo de variable en la primera instanciacion
        // No se puede usar inferencia de tipos si se declara y despues se inicializa
        // si o si tiene que declarar e inicializar en la misma linea
        var email = "nicolas@gmail.com";
        System.out.println(email);

        // Constante = final - modificador para variables constantes, no puede variar
        // Las constanes se nombran en MAYUSCULAS
        final String EMAIL = "nicolaspinera@gmail.com";
        System.out.println(EMAIL);
    }
}
