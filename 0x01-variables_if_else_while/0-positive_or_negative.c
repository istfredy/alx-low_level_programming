#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Return: "is positive", "is zero", "is negative" or 0 none on failure
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n");
}
else if (n == 0)
{
printf("%d is zero\n");
}
else
{
printf("%d is negative\n");
}
/* your code goes there */
return (0);
}
