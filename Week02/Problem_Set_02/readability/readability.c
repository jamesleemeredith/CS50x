#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

int calculate_reading_level(string text);

int main(void)
{
    // Get text from the user
    string text = get_string("Text: ");
    // Calculate the reading level
    int reading_level = calculate_reading_level(text);
    // Print reading level
    if (reading_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (reading_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
    printf("Grade %i\n", reading_level);
    }
}

int calculate_reading_level(string text)
{

    int letter_count = 0;
    int word_count = 1;
    int sentence_count = 0;

    // Loop through text to determine letter count, word count, and sentence count
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
        else if (text[i] == ' ')
        {
            word_count++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_count++;
        }
    }
    // Calculate and return the reading level
    float L = ((float) letter_count/word_count) * 100;
    float S = ((float) sentence_count/word_count) * 100;
    int index = (int) round(0.0588 * L - 0.296 * S - 15.8);
    // index = round(index);
    return index;
}
