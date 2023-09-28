#include "main.h"

/**
 * _puts_recursion - prints a string with a new line
 * @s: an input
 * Return - returns void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;

	}

	_putchar (*s);
	s++;
	_puts_recursion(s);
}
