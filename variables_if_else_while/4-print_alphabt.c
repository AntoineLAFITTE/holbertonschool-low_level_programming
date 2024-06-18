#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description : prints the alphabet in lowercase
 *except q and e.
 *
 * Return: 0 (success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }
    putchar('\n');

    return (0);
}
