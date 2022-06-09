#include <stdio.h>
#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line
 * Return: zero
 */
int main(void)
{
	int i = 0;
	char str[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (i <= 8)
	{
		_putchar(str[i]);
		i++;
	}
	/*_putchar('\n');*/
	return (0);
}
