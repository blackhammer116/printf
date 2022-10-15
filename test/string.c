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
