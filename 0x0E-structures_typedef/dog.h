#ifndef DOG_H
#define DOG_H

/**
 *struct dog - basic info of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *
 *Description: basic info of dogs
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

#endif /*dog.h*/
