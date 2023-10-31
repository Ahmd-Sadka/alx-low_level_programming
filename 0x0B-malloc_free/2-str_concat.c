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
	char *conct;
	int i = 0, ci = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
