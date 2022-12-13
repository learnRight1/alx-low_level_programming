#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 10; n < 100; n++)
	{
		putchar(n);
		if (n != 100)
		{
			putchar(',');
			putchar(' ');
		}

	putchar('\n');

	return (0);
}
