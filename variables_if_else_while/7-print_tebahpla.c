#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar(n);
	return (0);
}
