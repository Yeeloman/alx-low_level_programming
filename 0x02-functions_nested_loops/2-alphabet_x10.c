#include "main.h"

/**
 * main - check the code
 * description print_alphabet_x10 -prints alpha 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
i++;
}
}