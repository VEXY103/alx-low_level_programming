#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog.
  * @name: name.
  * @age: age.
  * @owner: owner.
  * Return: pointer.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, a, b;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}

	for (a = 0; name[a]; a++)
		;

	for (b = 0; owner[b]; b++)
		;

	dog->name = malloc(a + 1);
	dog->owner = malloc(b + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < a; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
