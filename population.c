#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start Size:\n"); //get start input
    }
    
    while (start < 9); //make sure the input is greater than 9

    int end;
    do
    {
        end = get_int("End Size:\n"); //get end input
    }
    while (end < start); //make sure input is greater than or equal to start input

    int years = 0; //initalize that years counter
    while (end > start) //loop while end is greater than start
    {
        start = start + round((start/3) - (start/4)); // round the difference between the death and birth answers then add that number to start
        years++; //increase the years counter
    }
    printf("Years: %i", years); //print the number of years needed to get to end value
}