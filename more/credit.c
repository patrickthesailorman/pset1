#include <cs50.h>
#include <stdio.h>

// Validate cc number

int main(void)
{
    int cc;
    do
    {
        printf("Enter credit card number:\n");
        cc = get_long_long(); // User enters cc number
    }
    while ( cc < 0 ); // validate numbers entered
}