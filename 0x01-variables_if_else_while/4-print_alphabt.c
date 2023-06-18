#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Printfs the alphabet in lowercase except q and e
*
* Return: Always 0.
*/
int main(void)
{char a = 'a';
int i = 0;
for (i = 0; i < 26 ; i++)
{
if ((a + i) != 'q' && (a + i) != 'e')
putchar(a + i);
}
putchar('\n');
return (0);
}

