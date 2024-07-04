#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success), 1 if any argument contains non-digit symbols
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		for (char *p = argv[i]; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
