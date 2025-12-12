#include <stdio.h>
#include <cs50.h>

int string_length(string s);

int main (void)
{
    string input_string = get_string("Enter your string: ");
    int length = get_length(input_string);
    printf("Length = %i",length);
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}