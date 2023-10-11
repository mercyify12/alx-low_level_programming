#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - funtion that  initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: initiallization name
 * @age: initiallization age
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
