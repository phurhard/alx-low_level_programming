#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Dog structure
 * @name: dog member
 * @age: Dog member
 * @owner: Last dog member
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
