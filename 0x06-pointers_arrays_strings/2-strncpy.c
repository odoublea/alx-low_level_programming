#include "main.h"
/**
 * _strncpy - copies a strings
 * @dest: destination.
 * @src: source.
 * @n: amount in bytes from src
 * return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
