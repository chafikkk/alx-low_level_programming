#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
int i = 0;
char lr;
while (i < 10)
{
for (lr = 'a'; lr <= 'z'; lr++)
{
_putchar(lr);
}
i++;
_putchar('\n');
}
}

