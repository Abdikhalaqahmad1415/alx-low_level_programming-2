#include <stdio.h>
#include "main.h"
/**
 * main - print the first 50 fibonacci
 *
 * Return: Always success
 */
int main(void)
{
int count;
unsigned fib1 = 0, fib2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (count == 49)
printf("\n");

else

printf("\n");
}
return (0);

}
