#include <stdio.h>

/**
 * main - designated start of the program
 * Return: Always 0
 */
int main(void)
{
char f;

for (f = 'a' ; f <= 'z' ; f++)
{
putchar(f);
}
for (f = 'A' ; f <= 'Z' ; f++)
{
putchar(f);
}
putchar('\n');
return (0);
}
