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
res = i * j;
if (res >= 12)
putchar(((res / 10) + 48));
else
putchar(' ');
putchar(((res % 10) + 48));
if (j != 9)
putchar(',');
}
putchar('\n');
}
}

