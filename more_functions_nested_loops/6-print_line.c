#include "main.h"
/**
 * print_line - function that prints a line.
 * @n: integer for the paramaters of the function
 * Return: 0
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
