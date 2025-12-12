#include <cs50.h>
#include <stdio.h>

//Note: You can insert a prototype void meow(void); if you want to put the actual function declaration at the bottom of the file

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    int n = get_int("Enter Number of Meows: ");
        meow(n);
}