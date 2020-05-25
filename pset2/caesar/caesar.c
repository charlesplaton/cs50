#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string ciphertext = "";
    // Check if there are 2 args
    if (argc == 2)
    {

        // Rejects 0 as starting digit
        if (argv[1][0] == 48)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        // Tests if char is located in the numbers ascii
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (argv[1][i] < 48 || argv[1][i] > 57)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // Sets str arg into int
        int key = atoi(argv[1]);

        // Gets the plaintext
        string unturn = get_string("plaintext: ");

        // Ciphering tool
        printf("ciphertext: ");
        for (int j = 0; unturn[j] != '\0'; j++)
        {
            int num_text = unturn[j];

            if (num_text >= 97 && num_text <= 122)
            {
                int solver = (num_text + key - 97) % 26;
                printf("%c", solver + 97);
            }

            else if (num_text >= 65 && num_text <= 90)
            {
                int solver = ((int) unturn[j] + key - 65) % 26;
                printf("%c", solver + 65);
            }

            else
            {
                printf("%c", unturn[j]);
            }

        }

        printf("\n");
    }

    // Rejects if there are less than 2 args
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}