#include "dog.h"

/**
 * _strlen - func return sring length
 * @str: string input
 * Return: len
 */

int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;

	return (len);
}

/**
 * _strcopy - copy string from src to dest
 * @dest: new copy
 * @src: source to copy
 * Return: cpy of string
 */

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}

/**
 **new_dog - func creates a new dog
 *@name: new dog name
 *@age: new dog age
 *@owner: new owner
 *Return:  copy of name and owner or Return NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newName, *newOwner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newName = malloc(strlen(name) + 1);
	if (newName == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newName, name);

	newOwner = malloc(strlen(owner) + 1);
	if (newOwner == NULL)
	{
		free(newName);
		free(newdog);
		return (NULL);
	}
	strcpy(newOwner, owner);

	newdog->name = newName;
	newdog->age = age;
	newdog->owner = newOwner;

	return (newdog);
}
}
