#include "main.h"

/**
 * _isdigit - check the code for a digit 0 through 9
 * @c: char to check
 * Return: Alway return 0 or 1
 */

int _isdigit(int c);
{
	if (c >=  '0' && c <= '9')
		return (1);
	else
		return (0);
