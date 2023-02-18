#include <stdio.h>
/**
 *main - Entry of point
 *
 * Return: 0 on success, none on faillure
 */
int main(void)
{
/* My code */
int n;
n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
