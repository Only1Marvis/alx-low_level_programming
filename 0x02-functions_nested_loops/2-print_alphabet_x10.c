#include "main.h"


/**
 *File: 2-print_alphabet_x10.c
 *Auth: Marvis Onyenwenu Enubiaka
 */

/**
 *main - Prints 10 times the alphabet, in lowercase.
 *Return: Always 0 (Success)
 */


int print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
	}
}