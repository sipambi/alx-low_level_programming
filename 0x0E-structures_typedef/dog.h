#ifndef _DOG_
#define _DOG_
#include "stdio.h"
#include <stdlib.h>

/**
 * struct dog - structurie
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Struct is for man's best friend
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*_DOG_*/
