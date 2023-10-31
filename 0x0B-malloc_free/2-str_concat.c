#include <stdlib.h>
#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index, size;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		size++;

	concat_str = malloc(sizeof(char) * (size + 1));

	if (concat_str == 0)
		return (0);

	for (index = 0; s1[index]; index++)
	{
		concat_str[concat_index] = s1[index];
		concat_index++;
	}

	for (index = 0; s2[index]; index++)
	{
		concat_str[concat_index++] = s2[index];
		concat_index++;
	}

	return (concat_str);
}
