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
	int i, temp, j = 0;
	int arr[10000], arr2[10000];
	int qot;
	qot = num / 2;
	for (i = 0; qot != 0; i++)
	{
		qot = num / 2;
		arr[j] = num % 2;
		num = qot;
		j++;
	}
	i = 0;
	for (j; j > 0; j--)
	{
		temp = arr[j];
		arr2[i] = temp;
		i++;
	}
	return (arr2);
}
