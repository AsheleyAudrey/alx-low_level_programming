#include <stdio.h>

/**
 * main - check the code
 *
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
