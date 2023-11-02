#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: allocated size
 * Return: ponter to address of memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memo;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return  (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < (nmemb * size); i++)
			memo[i] = 0;

		return (memo);
	}
}
