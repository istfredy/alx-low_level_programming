#include "main.h"

/**
 * flip_clip - counts the number of bits to change
 *		to get from one number to another.
 * @n: first number.
 * @m: second number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bts, check;
	unsigned int i, count;

	check = 1;
	bts = n ^ m;
	count = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (bts & check))
			count++;
		check <<= 1;
	}

	return (count);
}

