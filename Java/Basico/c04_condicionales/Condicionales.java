package c04_condicionales;

public class Condicionales {
    public static void main(String[] args) {

        // Condicionales

        var edad = 18;

        // if - else if - else

        if (edad > 18) { // if (Condicion)
            System.out.println("Eres mayor de edad");
        } else if (edad == 18) {
            System.out.println("Tienes justo 18");
        } else {
            System.out.println("No eres mayor de edad");
        }

        // switch
        // El switch sigue con los siguientes casos si no se pone el break
        var day = 5;
        switch (day) {
            case 1:
                System.out.println("Lunes");
                break; // Rompe la ejecucion y se saltea lo siguiente
            case 2:
                System.out.println("Martes");
                break;
            case 3:
                System.out.println("Miercoles");
                break;
            default: // Caso por defecto
                System.out.println("No es lunes - martes - miercoles");
                break;

        }

        // Ejercicios
        var numero = 15;
        if (numero % 2 == 0) {
            System.out.println("Es par");
        } else {
            System.out.println("Es impar");
        }

        if (numero >= 0 && numero < 100) {
            System.err.println("Esta en el rango del 0 al 100");
        }
        var letra = 'a';
        switch (letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                System.out.println("Es vocal");
                break;
            default: // Caso por defecto
                System.out.println("No es vocal");
                break;

        }
    }
}
