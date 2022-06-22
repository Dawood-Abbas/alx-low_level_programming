#include "main.h"

/**
* * _isupper - checks for uppercase character
* * @c: character that is checked
* * Return: 1 if uppercase return 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
