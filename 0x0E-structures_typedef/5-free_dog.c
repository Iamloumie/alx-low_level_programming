#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog
 * @d: incoming dog pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
