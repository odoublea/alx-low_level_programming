#include "main.h"

/**
 * _strncpy - used to copy strings
 * dest: destination of copied strings
 * src: source of copied strings
 * n: size of string in bytes from src
 * return: copy and return to destination
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
