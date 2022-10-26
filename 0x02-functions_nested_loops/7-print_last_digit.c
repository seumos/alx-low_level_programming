#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit
 * Return: 0 the valve of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < a)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (0);
}
