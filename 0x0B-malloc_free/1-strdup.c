#include <stdlib.h>
#include "main.h"

/**
*_strdup - returns a pointer to a newly allocated space in memory
*which contains a copy of the string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	unsigned int index, size;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		size++;
	cpy = malloc(sizeof(char) * (size + 1));

	if (cpy == 0)
		return (0);
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}
