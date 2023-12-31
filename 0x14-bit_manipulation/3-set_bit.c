#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: number
 *@index: given index
 *Return: 1 (work) or -1 (error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = (*n | (1ul << index));

	return (1);
}
