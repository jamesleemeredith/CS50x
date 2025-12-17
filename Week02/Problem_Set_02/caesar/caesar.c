#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string encrypt_text(int key, string text);

int main(int argc, string argv[])
{

    // Fail to return if user doesn't specify a validate key command-line argument
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else if (argc == 2)
    {
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: %s key\n", argv[0]);
                return 1;
            }
        }
    }

    // Convert command-line argument to k, handle values exceeding 26
    int k = atoi(argv[1]);
    // Accept plaintext from user
    string plain_text = get_string("plaintext:  ");
    // Convert plaintext to cypher text
    char *encrypted_text = encrypt_text(k, plain_text);
    printf("ciphertext: %s\n", encrypted_text);
    free(encrypted_text);
    return 0;
}

string encrypt_text(int key, string text)
{
    char *encrypted_text = malloc(strlen(text) + 1);
    // Loop through each character of text, encrypt it, then add it to encrypted_text
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            int value = text[i] + key;

            if (isupper(text[i]))
            {
                while (value > 90)
                {
                    value -= 26;
                }
                encrypted_text[i] = value;
            }
            else if (islower(text[i]))
            {
                while (value > 122)
                {
                    value -= 26;
                }
                encrypted_text[i] = value;
            }
        }
        else
        {
            encrypted_text[i] = text[i];
        }
    }
    return encrypted_text;
}
