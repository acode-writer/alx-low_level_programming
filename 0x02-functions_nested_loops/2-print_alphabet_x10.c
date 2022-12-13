#include "main.h"

/**
  * print_alphabet_x10: print alphabets 10 times.
  * Return: void
  */

void print_alphabet_x10(void)
{
	int times;

	for (times = 0; times < 10; times++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
