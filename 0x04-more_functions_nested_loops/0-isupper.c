#include "main.h"

/**
 * _isupper: this function checks for uppercase character
 * c: character input
 * Return 1 if the character is uppercase otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return(isupper);
}
