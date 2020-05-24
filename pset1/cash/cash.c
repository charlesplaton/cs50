#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Init
    float change;
    int counter = 0;

    // Check for numbers less than 1
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
    
    // Change float to int
    int int_change = round(change * 100);

    // Checks if divisible by 25
    if (int_change >= 25)
    {
        while (int_change >= 25 && int_change != 0)
        {
            int_change -= 25;
            counter++;
        }
    }

    // Checks if divisible by 25
    if (int_change >= 10)
    {
        while (int_change >= 10 && int_change != 0)
        {
            int_change -= 10;
            counter++;
        }
    }

    // Checks if divisible by 10
    if (int_change >= 5)
    {
        while (int_change >= 5 && int_change != 0)
        {
            int_change -= 5;
            counter++;
        }
    }

    // Checks if divisible by 5
    if (int_change >= 1)
    {
        while (int_change >= 1 && int_change != 0)
        {
            int_change -= 1;
            counter++;
        }
    }

    // Prints counter
    printf("%i\n", counter);
}