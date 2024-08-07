#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard using an array of characters.
 * @a: Pointer to the 2D array of characters wich is used as a chest board.
 * The function iterats through each row of the aray(chestboard) and prtins.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
