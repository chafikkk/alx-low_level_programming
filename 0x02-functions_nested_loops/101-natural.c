#include <stdio.h>
#include "main.h"

/**
 * sum_multible - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 */

void sum_multible(void)
{
int i, sum;
sum = 0;
for (i = 0; i <= 1024; i++)
{
if ((i % 3) == 0)
sum += i;
if ((i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
}