#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * @n: maximum number of characters to be copied
 *
 * Return: pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
