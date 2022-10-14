#include "main.h"

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
 * _pow - calculates @a the power of b.
 * @a: The base number.
 * @b: The exponent.
 *
 * Return: The powered number.
 */
int _pow(int a, int b)
{
	int i, ret;
	
	if (b == 0)
		return (1);
	for (i = 0, ret = 1; i < b; i++)
		ret = ret * a;
	return (ret);
}
/**
 * print_nubm - prints a number as a string.
 * @numb: The number to be printed.
 *
 * Return: 0 on succuss on error 1.
 */
int print_numb(int numb)
{
	int i, j, *list;

	list = malloc(sizeof(int) * 10);
	if (list == NULL)
		return (1);
	if (numb < 0)
	{
		pchar('-');
		numb = numb * -1;
	}
	for (i = 1, j = 0; ; i++, j++)
	{
		if (numb / _pow(10, i) == 0)
		{
			list[j] = numb / _pow(10, j);
			break;
		}
		list[j] = (numb % _pow(10, i)) / _pow(10, j);
	}
	for (; j > -1; j--)
		pchar(list[j] + '0');
	free(list);
	return (i);
}

