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
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
}
if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, (n % 10));
}
else
{
if ((n % 10) < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
}
}
return (0);
}

