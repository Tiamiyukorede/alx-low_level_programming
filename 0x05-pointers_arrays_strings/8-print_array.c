#include "main.h"

/**
 * print_array - print n element of an array of int
 * @a: first  array of int
 * @n: second array of element
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
