#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the structure
 * @d: pointer to a structure
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
