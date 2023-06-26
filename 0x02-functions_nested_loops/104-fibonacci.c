#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
int i;
unsigned long  a, b, sum;
unsigned long mil;
unsigned long a1, a2, b1, b2;
mil = 1000000000;
a = 0;
b = 1;
sum = 0;
for (i = 0; i <= 91; i++)
{
sum = a + b;
a = b;
b = sum;
printf("%lu, ", sum);
}
a1 = a / mil;
a2 = a % mil;
b1 = b / mil;
b2 = b % mil;
for (i = 92; i <= 98; i++)
{
printf("%lu", b1 + (b2 / mil));
printf("%lu", b2 % mil);
b1 = b1 + a1;
a1 = b1 - a1;
b2 = b2 + a2;
a2 = b2 - a2;
if (i != 98)
printf(", ");
}
printf("\n");
return (0);
}
