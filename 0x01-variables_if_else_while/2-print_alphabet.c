#include <stdio.h>

/**
 * main:  a program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = "a"; lc <= "z'; lc++)
	{
		putchar(lc);
	}
	putchar("\n");
	return (0);
}
