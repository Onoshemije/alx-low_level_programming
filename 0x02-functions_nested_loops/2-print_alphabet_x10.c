#include "main.h"
/**
 * print _alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
