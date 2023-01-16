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
	int a, b, c;
	dog_t *dog;

	a = b = 0;
	while (name[a++])
		;
	while (owner[b++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(a * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		dog->name[c] = name[c];

	dog->age = age;

	dog->owner = malloc(b * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
