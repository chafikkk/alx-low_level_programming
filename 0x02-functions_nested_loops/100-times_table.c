#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print n time table starting with 0
 * @n : number of times table
 */

void print_times_table(int n)
{
int i, j, res;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = i * j;
printf("%d", res);
if (j != n)
{
if (res >= 100)
printf(", ");
else
{
if (res >= 10)
printf(",  ");
else
printf(",   ");
}
}
}
	printf("\n");
}
}
