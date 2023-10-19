#include <stdio.h>
/*
 * main -outputs a loop for lower and upper case leters of the alphabet
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
