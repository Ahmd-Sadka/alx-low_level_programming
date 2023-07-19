#include "main.h"

/**
 * main - entry point
 * print_alphabet - Make the alphabet
 * Return: void
 */
int main(void)
{
	/**
	 * print_alphabet -  Make the alphabet
	 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
}
