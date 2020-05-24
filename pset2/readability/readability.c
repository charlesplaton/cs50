#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    string text = get_string("Text: ");

    // Initialize
    int char_counter = 0;
    int word_counter = 1;
    int sen_counter = 0;
    float index = 0;

    // For-Loop for each character
    for (int i = 0; text[i] != '\0' ; i++)
    {
        int num_text = text[i];

        // Counts uppercase
        if (num_text >= 97 && num_text <= 122)
        {
            char_counter++;
        }

        // Counts lowercase
        else if (num_text >= 65 && num_text <= 90)
        {
            char_counter++;
        }

        // Counts words
        else if (num_text == 32)
        {
            word_counter++;
        }

        // Counts sentences
        else if (num_text == 46 || num_text == 33 || num_text == 63)
        {
            sen_counter++;
        }
    }

    // Gets Coleman-Liau index
    index = (0.0588 * char_counter * 100 / word_counter) - (0.296 * sen_counter * 100 / word_counter) - 15.8;

    // Assessment if Before Grade 1 
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    
    // Assessment if Grade 1 to Grade 15
    else if (index >= 1 && index < 16)
    {
        int indexx = round(index);
        printf("Grade %i\n", indexx);
    }

    // Assessment if Grade 16+
    else
    {
        printf("Grade 16+\n");
    }
}