#include "main.h"

/**
 * main - loop that prints the abcs 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void) /*outputs abcs 10 times*/
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


