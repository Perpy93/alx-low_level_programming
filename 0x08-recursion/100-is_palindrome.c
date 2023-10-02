#include "main.h"
/**
 * sqrt_recursion - length of string
 *
 * @s: The string
 * Return: length of the string
 */
int sqrt_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _sqrt_recursion(s + 1));
}
/**
 * vary_string - vary each character of the string
 * @s: string
 * @left: small iterator
 * @right: big iterator
 * Return: int
 */
int vary_string(char *s, int right, int left)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + vary_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - shows if a string is a palindrome
 *
 * @s: string for testing
 *
 * Return: 1 if its a palindrome and 0 if not
 */
int is_palindrome(char *s);
{
	if (*s == '\0')
		return (1);
	return (vary_string(s, 0, strlen_recursion(s - 1)));
}
