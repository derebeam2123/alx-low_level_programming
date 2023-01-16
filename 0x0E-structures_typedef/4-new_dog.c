#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: first
 * @age: second
 * @owner: third
 * Return: NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, x, y;

	struct dog *n_dog = NULL;

	x = 0;
	while (name[x] != '\0')
		x++;
	y = 0;
	while (owner[y] != '\0')
		y++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name =  malloc(x + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner =  malloc(y + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= x; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= y; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
