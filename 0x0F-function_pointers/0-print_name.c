#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: No return because of void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
