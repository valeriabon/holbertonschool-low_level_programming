#include <stdio.h>
#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line
 * program - loop over the array
 * Return: zero
 */
int main(void)
{
	int i = 0;
        char str[7] = {'_','p','u','t','c','a','r'};

        while (i <= 7)
        {
                _putchar(str[i]);
                i++;
        }
        _putchar('\n');
	return (0);
}
