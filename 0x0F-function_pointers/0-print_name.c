/**
 * print_name - function prints name
 *
 * @name: string to print
 * @f: function pointer
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
