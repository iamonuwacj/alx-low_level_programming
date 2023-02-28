/*
 * File: 4-print_rev.c
 * Auth: Onuwa Chinedu
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;

	for (index--; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
