#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs prints the lowercase alphabet in reverse
*
* Return: Always 0.
*/
int main(void)
{
int i;
for (i = 122; i > 96 ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}

