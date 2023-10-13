#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 for success
 */
int main(void)
{
int i;

/* Print a message to indicate an infinite loop */
printf("Infinite loop incoming :(\n");

i = 0;

/* Create a loop that may lead to an infinite loop */
while (i < 10)
{
/* Commented out to prevent the infinite loop */
/* putchar(i); */
putchar(i);
}

/* Print a message to indicate that the infinite loop is avoided */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
