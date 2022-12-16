#include "main.h"

/**
 * print_line - print straight lines n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');