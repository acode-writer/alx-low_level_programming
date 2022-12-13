#include "main.h"
/**
  * print_sign - print sign.
  * @n: an integer.
  * Return: retrun 0 or 1
  */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}

	return (result);
}
