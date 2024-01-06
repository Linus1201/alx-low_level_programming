#include <stdio.h>
/**
 * main - print all numbers of base 8
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
char ch;
for (x = 48; x < 58; x++)
{
putchar(x);
}
ch = 'a';
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
