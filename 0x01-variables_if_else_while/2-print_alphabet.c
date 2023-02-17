#include <stdio.h>
/**
 * main - print the alphabets
 * Return: Always 'zero'
 */
int main(void)
{
	char [26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar ('\n');
	return (0);
}
