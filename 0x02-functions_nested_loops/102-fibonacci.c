#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long a, b, sum;
a = 0;
b = 1;
for (i = 0; i <= 50; i++)
{
sum = a + b;
a = b;
b = sum;
printf("%d, ", sum);
}
printf("lu", sum);
return (0);
}
