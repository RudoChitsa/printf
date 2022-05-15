#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 *format is a character string. 
 *The format string is composed of zero or more directives. 
 *You don’t have to reproduce the buffer handling of the C library printf function
 *You don’t have to handle the flag characters
 *You don’t have to handle field width
 *You don’t have to handle precision
 *You don’t have to handle the length modifiers
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
