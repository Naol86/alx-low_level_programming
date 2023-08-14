#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - naming my dog
 * @d: struct
 * @name: name of my dog
 * @age: age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->age = age;
d->name = name;
d->owner = owner;
}
