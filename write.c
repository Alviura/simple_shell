#include "shell.h"

/**
 * main - Entry point to shell program
 *
 * Description: the program writes a Hello world message on stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *dollar = "Hello World\n ";

	write(STDOUT_FILENO, dollar, 13);
	return (0);
}
