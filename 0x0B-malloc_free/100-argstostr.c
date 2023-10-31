#include <stdlib.h>
#include "main.h"

/**
 * argstostr - oncatenates all the arguments of a program
 * @ac: input
 * @av: input
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int k = 0, size = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			size++;
	}

	size += ac;
	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
