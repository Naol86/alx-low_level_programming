#include <stdio.h>
#include "dog.h"

/**
 * init_dog - naming my dog
 * @d: struct
 * @name: name of my dog
 * @age: age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->age = age;
d->name = name;
d->owner = owner;
}
