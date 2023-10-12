#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints any argument in function
 * @format: list of argument types passed to function
 * Return: any given argument
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list list;

	va_start(list, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
				case 'i':
					printf("%d", va_arg(list, int));
					check_stat = 0;
					break;
				case 'f':
					printf("%d", va_arg(list, int));
					check_stat = 0;
					break;
				case 'c':
					printf("%f", va_arg(list, double));
					check_stat = 0;
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
				printf("%s", str);
					break;
				default:
					check_stat = 1;
					break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(list);
}
