#include "function_pointers.h"

/**
 *int_index - search for an integer
 *@array: target array of elemnets
 *@size: size of array
 *@cmp:pointer to the function to be used to compare values
 *Return: returns the index of the first element
 *for which the cmp function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		return (index);
	}
	return (-1);
}
