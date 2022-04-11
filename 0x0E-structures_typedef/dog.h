#ifndef _DOG_
#define _DOG_

/**
 * struct dog - structure
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
#endif /*_DOG_*/
