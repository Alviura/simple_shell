#include "shell.h"

int main(int argc, char *argv[], char **env)
{
    char *buff = NULL, *prompt = "$ ";
    size_t buff_size = 0;
    ssize_t read;
    
    while(1){

        /* print '$' in the terminal*/
        write(STDOUT_FILENO, prompt, 2);

        /* Read data from standard input*/
        read = getline(&buff, &buff_size, stdin);
        if (read == 1)
        {
            perror("Error: (getline)");
            exit(EXIT_FAILURE);
        }

        return 0;
    }

}
