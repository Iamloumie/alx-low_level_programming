#include <stdio.h>

int main(void)
{
    int x, y;

    for (x = 0; x <= 9; x++)
    {
        for (y = x + 1; y <= 9; y++)
        {
            putchar(x + '0');
            putchar(y + '0');

            // Only print comma and space if it's not the last pair (8, 9)
            if (!(x == 8 && y == 9))
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}

