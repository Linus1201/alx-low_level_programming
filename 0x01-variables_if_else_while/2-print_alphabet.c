#include <stdio.h>
/**
 * main - prints alphabet a to z
 * followed by a new line
 * return:  always success (0)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
