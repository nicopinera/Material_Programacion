package c07_Funciones;

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
        for (int i = 0; i < 5; i++) {
            enviarEmails();
            enviarEmailsToUser("nicolaspinera@gmail.com");
            enviarEmailsToUser("nicolaspinera@gmail.com", "Nico");
        }
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
}
