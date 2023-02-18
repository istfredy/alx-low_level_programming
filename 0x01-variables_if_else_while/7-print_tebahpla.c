#include <stdio.h>
/**
 * main - Entry of point
 *
 * Return: 0 on success, none on faillure
 */
int main(void)
{
/* Start of my code */
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
