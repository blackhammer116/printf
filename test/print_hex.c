#include "main.c"
/**
 * print_hex - convertes decimal numbers into hexadecimal
 *  numbers.
 *  @num: number to be converted
 *  Return: to converted number in array form
 */
int print_hex(int num)
{
	int i, temp, j = 0;
	int arr[10000], arr2[10000];
	int qot;

	qot = num / 16;
	for (i = 0; qot != 0; i++)
	{
		qot = num / 16;
		arr[i] = num % 16;
		num = qot;
		j++;
	}
	i = 0;
	for (j; j > 0; j--)
	{
		switch (arr[j])
		{
			case 10:
				arr[j] = 'A';
				temp = arr[j];
				break;
			case 11:
				arr[j] = 'B';
				temp = arr[j];
				break;
			case 12:
				arr[j] = 'C';
				temp = arr[j];
				break;
			case 13:
				arr[j] = 'D';
				temp = arr[j];
				break;
			case 14:
				arr[j] = 'E';
				temp = arr[j];
				break;
			case 15:
				arr[j] = 'F';
				temp = arr[j];
				break;
			default:
				temp = arr[j];
				break;
		}
		arr2[i] = temp;
		i++;
	}
	return (arr2);
}
