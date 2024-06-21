#include <stdio.h>

int main(void)
{
    int x, y;

    for (x = 0; x <= 9; x++)
    {
        for (y = x + 1; y <= 9; y++)  // Start y from x + 1 to avoid duplicate pairs
        {
            putchar(x + '0');
            putchar(y + '0');
            if (x != 9 || y != 9)  // Print comma and space for all pairs except the last one
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}
