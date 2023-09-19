#include "main.h"

/**
 * _strcpy - Copies information from each element
 * @desti: destination file
 * @srcc: source file
 * Return: array
 */
char *_strcpy(char *desti, char *srcc)
{
	int i = 0;

	while (src[i] != '\0')
	{
		desti[i] = srcc[i];
		i++;
	}

	desti[i] = srcc[i];
	return (desti);
}
