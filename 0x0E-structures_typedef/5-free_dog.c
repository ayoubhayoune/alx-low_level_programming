#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees yo dog.
 * @d: dog to be freed.
 *
 * Return: void.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
