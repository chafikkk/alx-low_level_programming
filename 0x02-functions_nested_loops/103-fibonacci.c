#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long a, b, sum, total;
a = 0;
b = 1;
total = 0;
do {
sum = a + b;
a = b;
b = sum;
if ((sum % 2) == 0)
total += sum;
} while (sum <= 4000000);
printf("%lu", total);
printf("\n");
return (0);
}
