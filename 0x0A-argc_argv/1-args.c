#include <stdio.h>
#include "main.h"
/**
 * main - write a program that prints the number of arguments passed into it
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: Always  0 (success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
