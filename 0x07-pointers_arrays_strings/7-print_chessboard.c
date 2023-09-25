#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array.
 */
void print_chessboard(char (*a)[8])
{

	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
