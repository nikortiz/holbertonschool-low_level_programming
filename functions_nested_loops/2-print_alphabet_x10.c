#include "main.h"

/**
 * print alphabet x10 - outputs the abcs 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
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


