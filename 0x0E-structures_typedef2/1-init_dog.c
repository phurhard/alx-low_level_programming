#include "dog.h"
/**
 * init_dog - Initialize the struct dog
 * @name: Name member
 * @age: Age member
 * @d: dog struct
 * @owner: owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
