#include "main.h"

/**
 * _islower - is a function returns 1 if the character is lower case
 * @c: is the character to be checked
 * Return: 1 if its lower 0 if its not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
