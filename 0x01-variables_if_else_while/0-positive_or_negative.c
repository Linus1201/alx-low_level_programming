#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */


/* betty style doc for fuction main goes there */

/**
* main - assigns a random number to variable n
* code executes and prints positive or negative
*Return: Always 0 (success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

  /* this code prints out positive or negetive */
if (n > 0)
{printf("%d is positive\n", n);
}
else if (n == 0)
{printf("%d is zero\n", n);
}
else if (n < 0)
printf("%d is negetive\n", n);

return (0);
}
