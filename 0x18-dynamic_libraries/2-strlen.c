#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	count++;

	return (count);
}
