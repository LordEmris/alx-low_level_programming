#include "main.h"
	/**
	 * isupper - checks for upper case character
	 * @c: the function parameter
	 * Return: 1 if it's uppercase
	 */

	int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
		return (1);
		else
		return (0);
	}

