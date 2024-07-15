#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the function pointed by f
 * @name: pointer to the name
 * @f: pointer to the function used to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
