#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all alphabet in reverse
 * Return: Always 'zero'
 */
int main(void)
{
	char c  = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
