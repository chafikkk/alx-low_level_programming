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
for( int i = 0; i<26 ; i++)
printf("%c\n", a + i);
return (0);
}

