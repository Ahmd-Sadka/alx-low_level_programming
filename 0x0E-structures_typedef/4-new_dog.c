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

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);

newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}

newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}

newdog->name = _strcopy(newdog->name, name);
newdog->age = age;
newdog->owner = _strcopy(newdog->owner, owner);

return (newdog);
}
