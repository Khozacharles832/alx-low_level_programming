#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function to free dog struct
 * @d: the struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
