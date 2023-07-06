#include "main.h"

/**
 * wildcmp - function compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 1 if s1 and s2 arethe same
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == *s1)
		return (wildcmp(s2 + 1, s1 + 1));
	if (*s2 == '*')
		return(wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
