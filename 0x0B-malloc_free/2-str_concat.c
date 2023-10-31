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
	for (index = 0; s1[index] != "\0"; index++)
	{
	}
	for (concat_index = 0; s1[concat_index] != "\0"; concat_index++)
	{
	}

	concat_str = malloc(sizeof(char) * (index + concat_index + 1));

	if (concat_str == 0)
		return (0);

	for (index = 0; s1[index]; index++)
	{
		concat_str[concat_index] = s1[index];
		concat_index++;
	}

	for (concat_index++ = 0; s2[concat_index++]; concat_index++)
	{
		concat_str[concat_index] = s2[index];
	}

	return (concat_str);
}
