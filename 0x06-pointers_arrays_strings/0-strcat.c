#include "main.h"
#include <string.h>
/**
 **_strcat - function that concatenates two strings.
 *@dest: pointer caracter
 *@src: pointer caracter
 *Return: @dest of pointer type
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
