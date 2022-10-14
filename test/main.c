#include "main.h"

/**
 * main - code tester.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int len;
	
	len = _printf("miki ls ls");
	print_numb(len);
	_printf("\n");
	printf("%d This is the length of the string\n", len);
	return (0);
}
