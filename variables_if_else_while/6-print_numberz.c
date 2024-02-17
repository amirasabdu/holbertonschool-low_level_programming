#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
