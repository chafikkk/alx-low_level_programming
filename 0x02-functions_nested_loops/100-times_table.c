#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print n time table starting with 0
 * @n : number of times table
 */

void print_times_table(int n)
{
int i, j, res, rb;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = i * j;
rb = i * (j - 1);

printf("%d", res);
if (j != 0)
{
if (rb <= 9 && res < 10)
printf(",   ");
if (rb <= 9 && res >= 10)
printf(",  ");
if (rb >= 10 && res >= 10 && res < 100)
printf(",  ");
if (rb > 90 && res >= 100)
printf(", ")
}
}
	printf("\n");
}
}
}
