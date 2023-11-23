#include "main.h"

/**
 *print_binary - print binary representation
 *
 *@n: decimal number
 *
 *Retuen: binary num
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
