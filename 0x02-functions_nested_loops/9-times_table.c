#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int i, j, res, rb;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int i, j, res, rb;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
res = i * j;
rb  = i * (j - 1);
if (j != 0)
{
if (rb <= 9 && res < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
if (rb <= 9 && res >= 10)
{
_putchar(',');
_putchar(' ');
}
if (rb >= 10 && res >= 10 && res < 100)
{
_putchar(',');
_putchar(' ');
}
}
if (res >= 10)
_putchar((res / 10) + 48);
_putchar((res % 10) + 48);
}
_putchar('\n');
}
}
}
}
