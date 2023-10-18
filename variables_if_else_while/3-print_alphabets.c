#include <stdio.h>
/**
 *main - entry point
 *
 *
 */
int main(void) /*outputs the alphabet in lower and uppercase until Z and z*/
{
	char alphabet;
	char alphaBet;

	printf("lower case character:\n");
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	printf("upper case charater:\n");
	for (alphaBet = 'A'; alphaBet <= 'Z'; alphaBet++)
	{
		putchar(alphabet);
		putchar(alphaBet);
	}
		putchar('\n');
		return (0);
}

