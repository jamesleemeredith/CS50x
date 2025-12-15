#include <cs50.h>
#include <stdio.h>

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("How many blocks high should the pyramid be?");
    }
    while (n < 1);
    return n;
}

void print_blocks(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }
        // Print Blocks
        for (int w = 0; w < i; w++)
        {
            printf("#");
        }
        // Print New Line
        printf("\n");
    }
}

int main(void)
{
    int height = get_positive_int();
    print_blocks(height);
}
