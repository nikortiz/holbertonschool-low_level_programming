#include <stdio.h>
/**
*main - program that prints a number
*fizz, buzz or fizzBuzz
*
*Return: 0
*/


int main(void)
{

int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}

else if (num % 5 == 0)
{
printf("Buzz");
}

else
{
printf("%d", num);
}
putchar(' ');
}

printf("\n");
return (0);

}
