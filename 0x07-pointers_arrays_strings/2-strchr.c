#include "main.h"
/**
 * _strchr - Locats a character in a string
 * @s: string
 * @c: chracter to search
 * Return: poiter to the first occurence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}

