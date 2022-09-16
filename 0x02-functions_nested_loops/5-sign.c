#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n : number to check.
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}