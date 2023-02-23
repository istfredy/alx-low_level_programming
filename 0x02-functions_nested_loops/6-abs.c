#include "main.h"

/**
 * _abs - Entry point of a function
 *
 * _abs is a function that computes the absolute value
 *
 * @n: The integer int parameter for open the _abs funtion
 *
 * Return: 0 if n == 0, n if n>0 and -n in otherwise
 */
int _abs(int n)
{
/*My Code Here */
if (n == 0)
{
return (0);
}
else if (n > 0)
{
return (n);
}
else
{
return (-n);
}
}
