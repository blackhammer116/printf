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
 * pchar - prints a char @c.
 * @c: The character to be printed.
 *
 * Return: 1 on success on error -1.
 */
int pchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * rev_string - reverse a given string and store it back to the owner var
 * @s: The address of the string to be reversed.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i;
	char *first, *last, holder;

	first = s;
	last = &(*(s + (_strlen(s) - 1)));

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		holder = *last;
		*last = *first;
		*first = holder;

		first += 1;
		last -= 1;
	}
}

/**
 * convert_to_letter - converts any numb between 10 and 15
 * to therir respective hex value.
 * @arr: The array of the numbers.
 * @len: The length of the array;
 *
 * Return: A pointer to the coverted array on error NULL.
 */
char *convert_to_letter(int *arr, int len)
{
	int i;
	char *p;

	if (arr == NULL || len == 0)
		return (NULL);
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (arr[i] == 10)
			p[i] = 'a';
		else if (arr[i] == 11)
			p[i] = 'b';
		else if (arr[i] == 12)
			p[i] = 'c';
		else if (arr[i] == 13)
			p[i] = 'd';
		else if (arr[i] == 14)
			p[i] = 'e';
		else if (arr[i] == 15)
			p[i] = 'f';
		else
			p[i] = (arr[i] + '0');
	}
	rev_string(p);
	return (p);
}
