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

/**
 *dog_t - typedef fot dog struct
 */
typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);
int _strlen(char *str);
void free_dog(dog_t *d);

#endif
