#include "dog.h"
#include <stdlib.h>

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

	new_array = malloc(sizeof(dog_t));
	if (new_array == NULL)
		return (NULL);
	new_array->name = name;
	new_array->age = age;
	new_array->owner = owner;

	return (new_array);
}
