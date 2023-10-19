#include <stdio.h>
/*
 * main - entry point
 *
 * Return 0 (Success)
 */
int main(void)
{
/* outputs the alphabet in lower and upper case  */
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
