#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init _dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
