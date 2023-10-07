#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of three digits, separated by a comma and a space, with only the smallest
 * combination printed. Numbers are printed in ascending order, with three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
			{
				putchar('0' + firstDigit);
				putchar('0' + secondDigit);
				putchar('0' + thirdDigit);

				if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
