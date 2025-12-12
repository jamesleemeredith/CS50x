#include <stdio.h>
#include <cs50.h>

int main (void) {

    int length = 0;
    string string = get_string("Enter your text: ");

    while (string[length] != '\0')
    {
        length++;
    }
    printf("Length = %i\n", length);
}