#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
	int main(void)
{
int number = 12;
while (number <= 789)
{
putchar((number / 100) + '0');
putchar(((number / 10) % 10) + '0');
putchar((number % 10) + '0');
if (number != 789)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');
    return (0);
}

