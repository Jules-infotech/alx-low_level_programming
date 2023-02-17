#include <stdio.h>
/**
 * main - prints all single digit numbers of base 'Ten' starting from 'zero'
 * Return: Always 'zero'
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
