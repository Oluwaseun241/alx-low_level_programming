#include <stdio.h>

/**
 * main - prints out all numbers under 10
 * without using any char variables
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
