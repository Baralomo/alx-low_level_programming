#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Returin: Always 0
 */

int main(void)

{

	int p, q;

	for (p = 0; p <= 98; p++)
	{

	for (q = p + 1; q <= 99; q++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');

	if (num1 == 98 && num2 == 99)
	continue;

	putchar(',');
	putchar(' ');
        }
	}

	putchar('\n');

	return (0);
}
