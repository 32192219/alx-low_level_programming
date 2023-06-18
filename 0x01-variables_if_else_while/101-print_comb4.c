#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	for (number = 0; number < 790; number++)
{
int hundreds = number / 100;
int tens = (number / 10) % 10;
int units = number % 10
	if (hundreds != tens && hundreds != units && tens != units)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(units + '0');
if (number != 789)
{
putchar(',');
putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
