#include "main.h"

/**
 * _strlen - measures the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string on success
 * on error -1.
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		i = i;
	return (i);
}

/**
 * _printf - A function that perfomrms a formated printing
 * @format: The string to be printed.
 *
 * Return: The length of string printed.
 */
int _printf(const char *format, ...)
{
	int i, len;
	va_list list;
	char c, *hold;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0, len = 0; format[i] != '\0'; i++, len++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(list, int);
				write(1, &c, 1);
				len--;
				i++;
			}
			if (format[i + 1] == 's')
			{
				hold = va_arg(list, char *);
				write(1, hold, _strlen(hold));
				len = len + _strlen(hold) - 1;
				i++;
			}
		}
		else
		{
			write(1, (format + i), 1);
		}

	}
	va_end(list);
	return (len);
}

