#include "main.h"

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
 * print_numb - prints a number as a string.
 * @numb: The number to be printed.
 *
 * Return: 0 on succuss on error 1.
 */
int print_numb(int numb)
{
	int i, j, ret, *list;

	ret = 0;
	list = malloc(sizeof(int) * 10);
	if (list == NULL)
		return (1);
	if (numb < 0)
	{
		pchar('-');
		ret = 1;
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
	ret = ret + i;
	free(list);
	return (ret);
}

/**
 * print_binary - converts a givin decimal number into binary
 * representation and print it.
 * @num: decimal parameter which gets converted into
 * a binary representation.
 *
 * Return: The lenght of the printed character.
 */
int print_binary(int num)
{
	int i, j;
	int arr[10000]; /*arr2[10000]*/
	int qot;

	qot = num / 2;
	for (i = 0, j = 0; qot != 0; i++, j++)
	{
		qot = num / 2;
		arr[j] = num % 2;
		num = qot;
	}
	for (; j > -1; j--)
	{
		if (j == i)
			j--;
		pchar(arr[j] + '0');
	}
	return (i);
}

/**
 * print_hex - convertes decimal numbers into hexadecimal
 *  numbers  and print it.
 *  @num: number to be converted
 *
 *  Return: length of the printed characters.
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
	for (j = 1; j <= i; j++)
		pchar(arr2[j]);
	return (i);
}
/**
 *
 */
int print_hex_upper(int num)
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
	arr2 = convert_to_letter_upper(arr, i);
	for (j = 1; j<= i; j++)
		pchar(arr2[j]);
	return (i);
}
/**
 * print_octal - convertes decimal number into an oc
 * tal representation
 * @num: unsigned in parameter
 * return: i
 */
int print_octal(int num)
{
	int i, qot, j = 0, c/*, temp*/, arr[10000];
	char *arr2;

	if (num > 8)
	{
		qot = num / 8;
		for (i = 0; qot != 0; i++)
		{
			qot = num / 8;
			arr[i] = num % 8;
			num = qot;
		}
		c = i;
		/**
		for (i; i > -1; i--)
		{
			temp = arr[i];
			arr2[j] = temp;
			j++;
		}*/
		arr2 = convert_to_letter(arr, i);
		for (j = 1; j <= c; j++)
		{
			pchar(arr2[j]);
		}
		return (i);
	}
	return (num);
}
