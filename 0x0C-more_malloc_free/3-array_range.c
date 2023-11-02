#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min array value
 * @max: max array value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *nemo;
	int i, j = 0;

	if (min > max)
		return (NULL);

	nemo = malloc(sizeof(*nemo) * ((max - main) + 1));

	if (nemo == NULL)
		return (NULL);

	else
	{
		for (i = min; i < max; i++)
		{
			nemo[j] = i;
			j++;
		}
		return (nemo);
	}
}
