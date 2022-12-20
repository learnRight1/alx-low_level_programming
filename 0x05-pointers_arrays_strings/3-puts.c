#include "main.h"

/**
 * _puts - this is a function that puts
 * @str: a parameter to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putschar(*str);
	}
	_putschar('\n');

}
