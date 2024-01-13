#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i;
char letters = 'a';
for (i = 0; i < 10; i++)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
