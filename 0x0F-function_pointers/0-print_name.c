#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function
 * @name: charOne
 * @f: char Two
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
