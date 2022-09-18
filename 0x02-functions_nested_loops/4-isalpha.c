#include "main.h"
/**
 * _isalpha - function to check if c is a letter, loweercase or uppercase
 * @c: is the int the will use for the agument of the function
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z''))
	{
		return (1);
	}
	else
		return (0);
}

