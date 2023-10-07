#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits, separated by a comma and a space, with only the smallest
 * combination printed. Numbers are printed in ascending order, with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit;

	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar('0' + firstDigit);
			putchar('0' + secondDigit);

			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
