#incude "main.h"

/**
 * _strlen - show the lenght of a string
 * @s: char to check the lenght of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0; /*start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
