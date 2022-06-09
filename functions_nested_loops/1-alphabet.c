#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 * Return: zero
 */

void print_alphabet(void)
{
	char alpha = 'a'
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;

	}
	_putchar('\n');
	return (0);
}
