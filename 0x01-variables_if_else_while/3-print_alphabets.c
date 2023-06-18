#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs the alphabet in lowercase, and then in uppercase
*
* Return: Always 0.
*/
int main(void)
{char a = 'a';
char A = 'A';
int i = 0;
for (i = 0; i < 26 ; i++)
putchar(a + i);
for (i = 0; i < 26 ; i++)
putchar(A + i);
putchar('\n');
return (0);
}

