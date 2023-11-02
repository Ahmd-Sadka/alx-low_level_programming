#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min array value
 * @max: max array value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++;
		}
		return (array);
	}
	else
		return (NULL);
}
