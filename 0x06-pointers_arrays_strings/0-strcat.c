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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
