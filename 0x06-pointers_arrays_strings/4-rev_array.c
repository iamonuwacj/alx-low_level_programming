/*
 * File: 4-rev_array.c
 * Auth: Onuwa Chinedu
 */

#include "main.h"

/**
* reverse_array - reverse the contents of an array of integers
* @a: array of integers
* @n: number of elements in array
*/

void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	for (index = 0; index < (n / 2); index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}

