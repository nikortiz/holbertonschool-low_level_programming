#include <stdio.h>
/**
 * main - prints loop for lower and upper case alphabet
 *
 * Return Always (Success)
 */
int main(void)
{
char abc;


for (abc = 'a'; abc <= 'z'; abc++)
{
	putchar(abc);
}


for (abc = 'A'; abc <= 'Z'; abc++)
{
	putchar(abc);
}
		putchar('\n');
		return (0);
}
