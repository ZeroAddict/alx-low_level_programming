#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function concatenates all arguments in the program.
 *@ac: integer argument
 *@av: character argument
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string (Success), or NULL on (failure).
 */

char *argstostr(int ac, char **av)
{
	int i, length;
	int index;
	char *store;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1; /*lenght of concatenated string and +1 newline
		*code block calculates number of string in variable length
		 *argument ac passed into av
		 */
	}
	store = (char *)malloc(sizeof(char) * length + 1);
		/*typecasting malloc of string to store*/
		
	       if (store == NULL)
		{
			return (NULL);
		}
		index = 0; /*index keeps the
		     *correct results of the concat string in store in position
		     */

	for (i = 0; i < ac; i++)
	{
		strcpy(store + index, av[i]);
		index += strlen(av[i]);
		store[index++] = '\n';
	}
	store[length] = '\0'; /*null terminator after new line added*/
	return (store);
}
