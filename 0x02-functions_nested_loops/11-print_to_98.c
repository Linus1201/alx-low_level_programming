#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 *
 *@n: is a integer
 * Return: void
 */

void print_to_98(int n)
{

if (n < 99)
{

while (n < 99)
{
printf("%d, ", n);
n++;
}

}

else if (n > 99)
{
while (n > 99)
{printf("%d, ", n);
}
n--;
}
}
