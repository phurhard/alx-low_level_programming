#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Main code to print the struct dog
 * @d: user input structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	if (d->owner == NULL)
		printf("Name: %s\nAge: %f\n(nil)", d->name, d->age);
	if (d->name == NULL)
		printf("Name: (nil) \nAge: %f\nOwner:%s\n", d->age, d->owner);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
