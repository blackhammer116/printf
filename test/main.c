#include "main.h"

/**
 * main - code tester.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int len;

	len = _printf("miki %c %d %s", 'c', 11, "ls ls\n");
	_printf("%d\n", len);
	
	return (0);
}
