#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min array value
 * @max: max array value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *b;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*b) * ((max - min) + 1));
	if (b != NULL)
	{
		for (i = min; i <= max; i++)
		{
			b[j] = i;
			j++;
		}
		return (b);
	}
	else
		return (NULL);
}
