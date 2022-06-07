#include <stdio.h>
/**
 * main - This C program prints the size of various types
 * Return: zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c byte(s)", c);
	printf("Size of an int: %i byte(s)", i);
	printf("Size of a long int: %li byte(s)", li);
	printf("Size of a long long int: %lli byte(s)", lli);
	printf("Size of a float: %f byte(s)", f);
}
