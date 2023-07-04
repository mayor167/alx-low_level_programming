#include "main.h"
/**
 * print_chessboard -A function that prints the chessboard.
 *@a:1st value
 *Return:The chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row_counter;
	int  col_counter;

	for (row_counter = 0; row_counter < 8; row_counter++)
	{
		for (col_counter = 0; col_counter < 8; col_counter++)
		{
			_putchar (a[row_counter][col_counter]);
		}
		_putchar('\n');
	}
}
