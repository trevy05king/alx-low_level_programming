#include "function_pointers.h"


/**
* print_name -a function that print a name
* @name: the name gives
* @f: function of name
*
* Return: void
*/
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
