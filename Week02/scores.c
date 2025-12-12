#include <stdio.h>
#include <cs50.h>


// Constant (purely for example here)
//const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{

    int N = get_int("How many scores? ");
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print Average Score
    printf("Average score: %f", average(N, scores));
}

// Function to Calculate average score
float average(int length, int array[]) // Note: In C, if we pass an array in as a function argument, we have to include a second argument to specify it's length
{
    //Calculate Average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}