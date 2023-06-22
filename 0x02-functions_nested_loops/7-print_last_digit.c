#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: the int to check
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int aa;
if (n < 0)
n = -n;
aa = n % 10;
_putchar(aa + '0');
return (aa);
}
