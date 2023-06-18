#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs all possible different combinations of two digits.
*
* Return: Always 0.
*/
int main(void)
{
int i;
int j;
for (j = 48; j < 58 ; j++)
{
for (i = (j + 1); i < 58 ; i++)
{
putchar(j);
putchar(i);
if (j != 56)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}

