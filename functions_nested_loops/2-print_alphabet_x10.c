#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void) /*prototype funcion*/
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
	}
}


