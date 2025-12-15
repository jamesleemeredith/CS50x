#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for their name and then greets them
    printf("hello, %s\n", get_string("What's your name?"));
}
