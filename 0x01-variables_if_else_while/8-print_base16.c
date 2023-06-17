#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0x0;

	while (number <= 0x9)
	{
		putchar(number + '0x0');
		number++;
	}

	putchar('\n');

	return (0);
}
