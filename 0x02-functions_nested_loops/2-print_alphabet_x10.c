#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
int i = 0;
char l;
while (i < 10)
{
for (l = 'a'; l <= 'z'; l)
{
_putchar(l);
}
i++;
_putchar('\n');
}
}

