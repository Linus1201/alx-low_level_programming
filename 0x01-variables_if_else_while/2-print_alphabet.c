#include <stdio.h>
/**
* main - prints alphabet in lowercase,
* followed by a new line
* Return:  Always success (0)
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
