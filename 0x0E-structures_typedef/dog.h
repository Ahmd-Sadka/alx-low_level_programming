#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - type of data represent dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
