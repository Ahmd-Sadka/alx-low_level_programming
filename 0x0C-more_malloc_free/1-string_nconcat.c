#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: The maximum number of bytes of s2 to concatenate to s1
 * Return: return pointer to new allocated memory contain the required
 * or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s[i]; i++)
		size++;

	concat = malloc(sizeof(char) * (size + 1))

		if (concat == NULL)
			return (NULL);

	size = 0;

	for (i = 0; s1[i]; i++)
		concat[size++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[size++] = s2[i];

	concat[size] = "\0";

	return (concat);
}
