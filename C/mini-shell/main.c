#include <unistd.h>

// shell para ejecutar comandos

#define MAX_LINE_BYTES 255 // Maxima cantidad de bytes para comandos

int main()
{
    ssize_t bytes_read;
    char input_buff[MAX_LINE_BYTES];
    int fork_output;
    while (1)
    {
        write(1, ">->->", 6);                             // STDOUT = 1 -Escribe >>> en la consola
        bytes_read = read(0, input_buff, MAX_LINE_BYTES); // Lee el input del usuario
        // Guarda la cantidad de bytes ingresador
        //  Y el input del usuario
        input_buff[bytes_read - 1] = '\0'; // Ultimo lo tomo invalido

        fork_output = fork();
        if (fork_output == -1)
        {
            write(2, "Failed Fork", 12);
            return 1;
        }
        if (fork_output == 0)
        {
            execv(input_buff, 0); // Reemplaza el proceso por el comando
            input_buff[bytes_read - 1] = '\n';
            write(2, "Argumento invalido: ", 21); // Si se le pasa un comando invalido
            write(2, input_buff, bytes_read);     // STDERR = 2
            break; //salir del loop
        }

        input_buff[bytes_read - 1] = '\n';
        write(2, "Argumento invalido: ", 21); // Si se le pasa un comando invalido
        write(2, input_buff, bytes_read);     // STDERR = 2
    }

    return 0;
}
