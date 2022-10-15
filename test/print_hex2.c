#include "main.h"

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
			p[i] = 'A';
		else if (arr[i] == 11)
			p[i] = 'B';
		else if (arr[i] == 12)
			p[i] = 'C';
		else if (arr[i] == 13)
			p[i] = 'D';
		else if (arr[i] == 14)
			p[i] = 'E';
		else if (arr[i] == 15)
			p[i] = 'F';
		else
			p[i] = (arr[i] + '0');
	}
	rev_string(p);
	return (p);
}
/**
 * print_hex - convertes decimal numbers into hexadecimal
 *  numbers.
 *  @num: number to be converted
 *  Return: to converted number in array form
 */
int print_hex(int num)
{
	int i, qot, j, arr[10000];
	char *arr2;

	qot = num / 16;
	for (i = 0; qot != 0; i++)
	{
		qot = num / 16;
		arr[i] = num % 16;
		num = qot;
	}
	arr2 = convert_to_letter(arr, i);
	_printf("%s", arr2);

	return (i);
}
