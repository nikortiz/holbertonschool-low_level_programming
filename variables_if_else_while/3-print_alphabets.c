#include <stdio.h>
/**
 *
 * outputs the alphabet in upper and lower case
 *
 */
int main(void) /*outputs the alphabet in lower and uppercase until Z and z*/
{
	char alphabet;
	char uAlpha;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	for (uAlpha = 'A'; uAlpha <= 'Z'; uAlpha++)
	{
		putchar(alphabet);
		putchar(uAlpha);
	}
		putchar('\n');
		return (0);
}

