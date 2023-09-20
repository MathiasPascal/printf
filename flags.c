#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @ptr: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flags(char s, print *ptr)
{
	int i = 0;

	switch (s)
	{
		case '+':
			ptr->add = 1;
			i = 1;
			break;
		case ' ':
			ptr->space_bar = 1;
			i = 1;
			break;
		case '#':
			ptr->hash_tag = 1;
			i = 1;
			break;
	}

	return (i);
}
