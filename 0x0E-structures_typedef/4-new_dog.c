#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: incoming dog name
 * @age: incoming dog age
 * @owner: incoming dog owner
 * Return: returns the copy of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_array;
	char *name_copy, *owner_copy;


	new_array = malloc(sizeof(dog_t));
	if (new_array == NULL)
		return (NULL);

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_array);
		return (NULL);
	}
	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_array);
		return (NULL);
	}

	new_array->name = name_copy;
	new_array->age = age;
	new_array->owner = owner_copy;

	return (new_array);
}
