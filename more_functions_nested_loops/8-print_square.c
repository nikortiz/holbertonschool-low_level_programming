#include "main.h"

/**
 * print_square - prints a square
 *@size: parameter
 *
 */

void print_square(int size)
{

int row1, col2;

if (size > 0)
{
for (row1 = 0; row1 < size; row1++)
{
for (col2 = 0; col2 < (size - 1); col2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
