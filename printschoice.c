#include"main.h"

/**
 * _printf - clone the std printf
 * @format: initial stribng to use
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, valret;
	va_list args;

	va_start(args, format);
	if (format == 0)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count +=  _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 0)
				return (-1);
			valret = choose(args, format[i]);
			if (valret != -1)
				count += valret;
			else
			{
				if (format[i] == '%')
					count += _putchar('%');
				else
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
/**
 * choose - make the choice for the function
 * @arg: va_list variable to be pulled
 * @c: character to indicate choice
 * Return: number pf output chars or -1 if there was a problem
 */
int choose(va_list arg, char c)
{
	int count = 0, num;
	char *str, ch;

	switch (c)
	{
	case 's':
		str = va_arg(arg, char *);
		count += _puts(str);
		break;
	case 'c':
		ch = va_arg(arg, int);
		count += _putchar(ch);
		break;
	case 'i':
		num = va_arg(arg, int);
		count += print_i(num);
		break;
	case 'd':
		num = va_arg(arg, int);
		count += print_i(num);
		break;
	default:
		count = -1;
	}
	return (count);
}
