#ifndef MAIN_H
#define MAIN_H

#include <string.h>

/**
 * struct dog - Structure representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
