#include <stdio.h>
/**
 * main - prints all single digit numbers of base 'Ten' starting from 'zero'
 * Return: Always 'zero'
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
