#include "main.h"
#include <string.h>
/**
 * print_chessboard - fills the memory with given byte
 * Return: void
 * @a: memory location to start storing the chess board
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		if (i != 7)
			printf("\n");
	}
}
