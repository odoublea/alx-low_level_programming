#include "main.h"
/*
 * 0-strcat.c - a function that concatenates two strings
 * @dest - destination string
 * @src - source string
 * Return - src is appended and pointer to end of dest
 */
char *_strcat(char *dest, char *src)
{
	int i=0, j=0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
