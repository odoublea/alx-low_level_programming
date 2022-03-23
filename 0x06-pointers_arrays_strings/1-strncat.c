#include "main.h"

/*
 * _strcat.c - a function that concatenates two strings
 * dest: destination string
 * src: source string
 * n: amounts of bytes used from source
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1=0, str2=0;

	while (*(dest + str1) != '\0')
	{
		str1++;
	}
	
	while (str2 < n)
	{
		*(dest + str1) = *(src + str2);
		if (*(src + str2) == '\0')
			break;
		str1++;
		str2++;
	}
	return (dest);
}
