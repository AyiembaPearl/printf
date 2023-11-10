#include "main.h"
/**
 * main - test the function
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	int my, std;
	char *f = NULL;

	std = printf("Let's try to print out a simple sentence with a char %s f", f);
	putchar('\n');
	my = _printf("Let's try to print out a simple sentence with a char %s f", f);
	putchar('\n');
	printf("Yours returns %d while the std returns %d now\n", my, std);
	if (std == my)
		printf("Yaay you can print but without additional arguments with char arguments\n");
	return (0);
}
