#include "main.h"

/**
 * print_last_digit -> print the last digit
 *
 * @n: input number as an interger
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
