#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strcpy - Copies a string pointed to by src including null char to buffer
* @dest: A buffer to receive the copied string
* @src: The pointer of the string to the copied
* Return: Value of buffer dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}

/**
* _strlen - Determines the length of the string manually
* @s: Pointer to array of characters
* Return: Value of length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* *new_dog - Creates a new dog
* @name: Doggo name
* @age: Doggo age
* @owner: Doggo owner
* Return: Null on fail or pointer to new doggo
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int nlen = 0, olen = 0;

	nlen = _strlen(name);
	olen = _strlen(owner);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char) * nlen + 1);
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
	doggy->owner = malloc(sizeof(char) * olen + 1);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;
	return (doggy);
}
