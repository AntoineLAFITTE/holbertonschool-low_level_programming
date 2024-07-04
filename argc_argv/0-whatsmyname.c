#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc; /* parameter not used */
	printf("%s\n", argv[0]);
	return (0);
}
