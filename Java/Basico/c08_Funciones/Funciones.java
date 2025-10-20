package c08_Funciones;

import java.util.ArrayList;

public class Funciones {
    public static void main(String[] args) {
        /*
         * Funciones o Metodo
         * Bloque de codigo que realiza una tarea especifica
         * Se puede invocar desde cualquier parte del codigo
         * 
         * declaracion
         * modificador - valor de retorno - nombre - (parametros)-{}
         * 
         * En funciones static, solo se puden invocar otras funciones static
         */
        var nom = new ArrayList<String>();
        nom.add("Eduardo");
        nom.add("Juan");
        nom.add("Nico");

        for (int i = 0; i < 3; i++) {
            enviarEmails();
            enviarEmailsToUser("nicolaspinera@gmail.com");
            enviarEmailsToUser("nicolaspinera@gmail.com", "Nico");
        }
        enviarEmailsToUser(nom);
        var estado = sendEmailConEstado("");
        System.out.println(estado);
    }

    // Sin parametros o retorno
    public static void enviarEmails() {
        System.out.println("Mail enviado");
    }

    // Funcion con parametros
    public static void enviarEmailsToUser(String email) {
        System.out.println("Mail enviado a " + email);
    }

    // Sobrecarga de funciones - si se usa el mismo nombre, se debe cambiar o
    // agregar parametros
    public static void enviarEmailsToUser(String email, String user) {
        System.out.println("Mail enviado a " + email + " (" + user + ")");
    }

    public static void enviarEmailsToUser(ArrayList<String> emails) {
        for (String n : emails) {
            System.out.println("Email enviado a: " + n);
        }
    }

    // La sobre carga de funciones no funciona cambiando solo el tipo de dato
    // de retorno
    public static boolean sendEmailConEstado(String mail) {
        if (mail.isEmpty()) {
            return false; // Cuando se retorna algo, se finaliza la ejecucion
        }
        return true;
    }
}
