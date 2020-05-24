#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets input
    string name = get_string("What is your name?\n");

    // Print Hello with name
    printf("hello, %s \n", name);
}