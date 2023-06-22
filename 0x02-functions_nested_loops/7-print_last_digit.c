#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: the int to check
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int lst;
if (n < 0)
n = -n;
lst = n % 10;
if (lst < 0)
lst = -lst;
_putchar(lst + '0');
return (lst);
}
