#include "main.h"

/**
  * _putchar - print a char to stdout
  * @c: char to print
  * Return: 1 on success, -1 on faiure and set errno appropritaely
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
  * _puts - print a string f chars to stdout
  * @c: char string to print
  * Return: number of chars printed
  */
int _puts(char *c)
{
	int count = 0;

	if (c == NULL)
		return (_puts("(null)"));
	while (c[count])
	{
		_putchar(c[count]);
		count++;
	}
	return (count);
}
