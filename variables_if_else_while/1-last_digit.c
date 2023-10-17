#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - outputs the last digit of n number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastDi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDi = n % 10;

	if (lastDi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDi);
	}
	else if (lastDi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDi);
	}
	else if (lastDi < 6 && lastDi != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDi);
	}
	return (0);
}
