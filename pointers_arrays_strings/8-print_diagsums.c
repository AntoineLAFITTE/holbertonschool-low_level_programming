#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix (number of rows and columns)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i]; /*Somme de la diagonale principale */
		sum2 = sum2 + a[i * size + (size - 1 - i)]; /* Somme de la diagonale secondaire */
	}

	printf("%d, %d\n", sum1, sum2);
}
