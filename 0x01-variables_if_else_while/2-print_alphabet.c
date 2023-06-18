#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs program that prints the alphabet in lowercase
*
* Return: Always 0.
*/
int main(void)
{char a = 'a';
int i = 0;
for (i = 0; i < 26 ; i++)
putchar(a + i);
putchar('\n');
return (0);
}


