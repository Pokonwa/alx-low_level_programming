#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description - It prints alphabet in lower case followed by a newline
 * return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
