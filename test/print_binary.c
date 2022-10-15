#include "main.h"
/**
 * print_binary - converts a givin decimal number into binary
 * representation.
 * @num: decimal parameter which gets converted into 
 * a binary representation.
 * Return: the converted numbers in array form
 */
int print_binary(int num)
{
	int i, temp, j;
	int arr[10000], arr2[10000];
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
