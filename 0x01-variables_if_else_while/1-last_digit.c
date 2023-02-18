#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * This function serves as the entry point for the program.
 *
 * Return: "Last digit of n is" on success, non-zero on failure
 */
int main(void)
{
/* Your code goes here */
srand(time(0));
int n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
int last_digit = abs(n) % 10;
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}
