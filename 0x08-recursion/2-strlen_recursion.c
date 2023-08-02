#include "main.h"
/**
 * strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 * Return: length of the string
 */
int strlen_recursion(char *s)
{
	if (s == NULL)
		return (0);
	else	
		return (strlen_recursion(s + 1));
}
