#include <stdio.h>
/**
 *
 * outputs the alphabet in upper and lower case
 *
 */
int main(void) /*outputs the alphabet in lower and uppercase until Z and z*/
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');
		return (0);
}

