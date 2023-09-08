#include "shell.h"

/**
 * main - Entry point to shell program
 *
 * Description: the program writes a $ on stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *dollar = "$ ";

	write(STDOUT_FILENO, dollar, 2);
	return (0);
}
