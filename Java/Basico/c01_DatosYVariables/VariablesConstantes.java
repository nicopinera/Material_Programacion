package c01_DatosYVariables;

public class VariablesConstantes {
    // Funcion Principal
    public static void main(String[] args) {
        // Tipos de Variables
        // Variable String o Texto
        String nombre = "Nicolas"; // TipoDato NombreVariable = Valor
        System.out.println(nombre);

        nombre = "Beto"; // Cambio de valor
        System.out.println(nombre);

        // Variable entera
        int edad = 22;
        System.out.println("Mi edad es: " + edad);

        // var asigna el tipo de variable en la primera instanciacion
        var email = "nicolas@gmail.com";
        System.out.println(email);

        // Constante = final - modificador para variables constantes, no puede variar
        // Las constanes se nombran en MAYUSCULAS
        final String EMAIL = "nicolaspinera@gmail.com";
        System.out.println(EMAIL);
    }
}
