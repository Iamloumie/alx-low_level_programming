#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x, y;

    for (x = 0; x <= 99; x++)
    {
        for (y = x + 1; y <= 99; y++)
        {
            putchar((x / 10) + '0');  // Print the tens digit of x
            putchar((x % 10) + '0');  // Print the units digit of x
            putchar(' ');
            putchar((y / 10) + '0');  // Print the tens digit of y
            putchar((y % 10) + '0');  // Print the units digit of y

            if (x != 98 || y != 99)   // Avoid printing a comma and space after the last combination
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}

