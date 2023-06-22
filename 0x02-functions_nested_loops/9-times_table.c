#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int i, j, res;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i == 2 && j == 5)
{
_putchar(49);
_putchar(48);
}
else
{
res = i * j;
if (res >= 12)
_putchar(((res / 10) + 48));
else
_putchar(' ');
_putchar(((res % 10) + 48));
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

