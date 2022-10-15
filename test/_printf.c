#include "main.h"

/**
 * pass_it - checks and pass an identifier to the wirte
 * function.
 * @c: The identifier to be checked.
 * @cnt: The address of the counter variable.
 * @len: The address of the length counter variable.
 * @list: The variadic fucntion variables list.
 *
 * Return: 0 on success 1 on error.
 */
int pass_it(char c, int *cnt, int *len, va_list list)
{
	char *hold;
	int cnt_, len_;

	cnt_ = *cnt;
	len_ = *len;
	switch (c)
	{
		case 'c':
			pchar(va_arg(list, int));
			len_--;
			cnt_++;
			break;
		case 's':
			hold = va_arg(list, char *);
			write(1, hold, _strlen(hold));
			len_ = len_ + _strlen(hold) - 1;
			cnt_++;
			break;
		case 'd':
			len_ = len_ + print_numb(va_arg(list, int)) - 1;
			cnt_++;
			break;
		case 'b':
			len_ = len_ + print_binary(va_arg(list, int)) - 1;
			cnt_++;
			break;
		default:
			pchar(va_arg(list, int));
	}
	*cnt = cnt_;
	*len = len_;
	return (0);
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

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0, len = 0; format[i] != '\0'; i++, len++)
	{
		if (format[i] == '%')
		{
			pass_it(format[i + 1], &i, &len, list);
		}
		else
		{
			write(1, (format + i), 1);
		}

	}
	va_end(list);
	return (len);
}

