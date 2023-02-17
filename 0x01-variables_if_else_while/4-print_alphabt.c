#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 'zero'
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if ((c != 'q' && c != 'e') && c <= 'z')
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
