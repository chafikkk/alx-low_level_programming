#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet_x10(void)
{
int i = 0;
char letter;
while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
i++;
}
}
_putchar('\n');
}
