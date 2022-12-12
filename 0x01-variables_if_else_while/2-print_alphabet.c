#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase.
 * Return: Always 0
 */
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		putchar(Lc);
	}
	putchar("\n");
	return (0);
}
