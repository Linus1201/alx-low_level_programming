#include <stdio.h>
/**
 * main - print alphabet in lowercase exept q and e
 * followed by a new line
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
