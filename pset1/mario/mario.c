#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Gets correct input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // For Row
    for (int row = 1; row <= height; row++)
    {

        // For Spaces
        for (int space = height - row; space > 0; space--)
        {
            printf(" ");
        }

        // For Left Hashes
        for (int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }

        // Prints spaces between
        printf("  ");

        // For Right Hashes
        for (int lhash = 1; lhash <= row; lhash++)
        {
            printf("#");
        }
        // Prints new line
        printf("\n");
    }
}