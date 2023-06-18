#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs the program compare the last digit of
*random integer
*and return is less than 6 not 0
*is 0 or is greater than 5
* Return: Always 0.
*/
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lst_dg;
lst_dg = n % 10;
if (lst_dg > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lst_dg);
}
if (lst_dg == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lst_dg);
}
else
{
if (lst_dg < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dg);
}
}
return (0);
}

