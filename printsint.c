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
		_putchar('-');
<<<<<<< HEAD
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	_putchar(last + '0');
	}
	return (i);
=======
		count++;
		arg *= -1;
		k = arg;
	}
	k /= 10;
	if (k)
		count += print_i(k);
	count += _putchar(((unsigned int) arg % 10) + 48);
	return (count);
>>>>>>> 953eaa71b7d14d74185300a646e2084fd6fb0813
}
