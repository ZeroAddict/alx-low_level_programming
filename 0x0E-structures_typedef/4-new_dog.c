#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
*_strlen - function calculates length of character
*@a: character whose length is checked
*Return: strlen(a)
*/

int _strlen(char *a)
{
	int l;

	l = 0;
	while (*a++)
		l++;
	return (l);
}
/**
* *_strcpy - copies the string pointed to by character pointer srz
* @src: char type string
* @first: char type string
string *src points to is copied into the buffer pointed at by first
* Return: pointer to first
*/

char *_strcpy(char *first, char *src)
{
	int x = -1;

	do {
		x++;
		first[x] = src[x];
	} while (src[x] != '\0');

	return (first);
}

/**
*new_dog - function creates a new dog.
*@name: character variable for name
*@age: float variable
*@owner: char variable
*Return: new struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_d->name == NULL)
		{
		free(new_d);
		return (NULL);
		}

	new_d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_d->owner == NULL)
		{
		free(new_d);
		return (NULL);
		}
	new_d->name = _strcpy(new_d->name, name);
	new_d->owner = _strcpy(new_d->owner, owner);
	return (new_d);
}

