#include "main.h"
/**
 * print_chessboard - Prints a chessboard using
 *  the given array of board elements.
 * @a: An 8x8 array containing the board elements.
 * Returns: Nothing.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; a[i][7]; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
