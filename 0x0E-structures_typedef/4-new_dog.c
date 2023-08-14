#include "dog.h"

/**
 * new_dog - Creates a new dog and initializes its attributes.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog, or NULL if malloc fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = _strcopy(name_copy, name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = _strcopy(owner_copy, owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

/**
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcopy(char *dest, char *src)
{
	int i;
	int length = _strlen(src);

	dest = malloc(length + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	dest[length] = '\0';

	return (dest);
}


/**
 * _strlen - Computes the length of a string.
 * @str: Input string.
 *
 * Return: Length of the string.
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
