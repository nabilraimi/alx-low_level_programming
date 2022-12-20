#include "main.h"
#include <stdio.h>

/**
 *  * rev_string - reverse the given string
 *   * @s: string passing pointer
 *    *
 *     */
void rev_string(char *s)
{
	int _size = _strlen(s);
	int i = 0;
	char tmp;

	for (i = 0; i < (_size / 2); i++)
	{
		tmp = s[i];
		s[i] = s[_size - 1 - i];
		s[_size - 1 - i] = tmp;
	}

}
