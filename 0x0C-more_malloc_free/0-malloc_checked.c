#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the memory block to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
