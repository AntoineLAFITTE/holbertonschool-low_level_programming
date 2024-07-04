#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
