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
unsigned long a, b, sum;
a = 0;
b = 1;
i = 1;
do {
sum = a + b;
a = b;
b = sum;
printf("%lu", sum);
if (i != 98)
printf(", ");
i++;
} while (i <= 98);
printf("\n");
return (0);
}
