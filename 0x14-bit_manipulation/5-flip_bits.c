#include "main.h"

/**
 * flip_clip - counts the number of bits to change
 * to get from one number to anothe
 * @a: first number
 * @b: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int i, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ b;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}

