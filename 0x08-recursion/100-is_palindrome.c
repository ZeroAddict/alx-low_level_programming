#include "main.h"
/**
 *_length - checks the length of the string
 *@s: string whose length is to be checked
 *Return: the length of the strig
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 *checkpali - checks if input string is a palindrome
 *@i: i is the index character
 *@strlen: is the length of the string 
 *@s: is the string
 *Return: 1 if string is a palindrome, 0 if not
 */
int checkpali(int i, int strlen, char *s)
{
	if (strlen > 0)
	{
		if (s[i] == s[strlen])
		{
			return (checkpali(i + 1, strlen - 1, s));
		}
		else if (s[i] != s[strlen])
		{
			return (0);	
		}
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (checkpali(0, _length(s) - 1, s));
}
