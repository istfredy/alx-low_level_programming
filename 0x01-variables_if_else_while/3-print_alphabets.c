#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success
 */
int main(void)
{
/*My Code Here*/
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
