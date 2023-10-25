#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 *
 */
void print_triangle(int size)
{
	int t;
	int n = size - 1;
	int f = 1;
	int g;
for (t = 0; t < size; t++)
{
	n = size - f;
while (n != 0)
{
	n--;
	_putchar(' ');
}
for (g = 1; g <= f; g++)
{
	_putchar('#');
}
_putchar('\n');
f++;
}
}

