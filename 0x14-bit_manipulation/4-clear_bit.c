#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = ~(1 << index);
	*n = *n & i;

	return (1);
}

