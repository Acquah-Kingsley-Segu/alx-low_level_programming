#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog features
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Description: represents the features every dog has
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
