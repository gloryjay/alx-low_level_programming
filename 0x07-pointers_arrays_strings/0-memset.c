#include "main.h"
/**
 * _memset -fills memory with a constant byte.
 * @s: source tring
 * @b: the constant byte fkor filling
 * @n: lenght of buffer
 * Return: new atring
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
