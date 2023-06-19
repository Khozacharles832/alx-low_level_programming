#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function to initialise a new dog struct
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 *
 * Return: the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(owner);
		free(new);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(new);
		free(name);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
