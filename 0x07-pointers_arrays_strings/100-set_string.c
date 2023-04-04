#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * the pointer share the value
 * @s: first pointer to pointer
 * @to: other  pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
