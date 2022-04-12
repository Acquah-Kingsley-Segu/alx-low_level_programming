#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new struct of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!new_dog)
	{
		return (NULL);
	}

	new_dog->name = name;
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = owner;
	if (!new_dog->owner)
	{
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
