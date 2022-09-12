#include <stdio.h>

/**
 * main - putchar
 * Description: this program prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	putchar("\nLowercase characters : \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar("%c ", ch);
	return (0);
}
