#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
/*Code Here*/
char lc = 'a';
while (lc <= 'z')
{
_putchar(lc);
lc++;
}
_putchar('\n');
}
