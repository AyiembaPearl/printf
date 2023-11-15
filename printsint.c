#include "main.h"
/**
 * print_i - a function that prints a number using recursion
 * @arg: the number to be printed
 * Return: number of digits printed
 */
int print_i(int arg)
{
	unsigned int k = arg;
	int count = 0;

	if (arg < 0)
	{
		putchar('-');
		count++;
		arg *= -1;
		k = arg;
	}
	k /= 10;
	if (k)
		count += numprint(k);
	count += _putchar(((unsigned int) arg % 10) + 48);
	return (count);
}
