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

	int nc, oc, i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!new_dog)
	{
		return (NULL);
	}
	
	for (nc = 0; name[nc]; nc++)
		;
	nc++;

	new_dog->name = (char *)malloc(sizeof(' ') * nc);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= nc; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (oc = 0; owner[oc]; oc++)
		;
	oc++;

	new_dog->owner = (char *)malloc(sizeof(' ') * oc);
	if (!new_dog->owner)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	for (j = 0; j < oc; j++)
		new_dog->owner[j] = owner[j];

	return (new_dog);
}
