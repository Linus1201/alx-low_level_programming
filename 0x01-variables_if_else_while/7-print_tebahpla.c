#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char rv;
for (rv = 'z'; rv >= 'a'; rv--)
{
putchar(rv);
}
putchar('\n');
return (0);
}
