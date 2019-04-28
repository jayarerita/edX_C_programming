/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.
*/

#include <stdio.h>

int min(int, int);

int main(void)
{
    int length = 0, lowest = 0;

    scanf("%d", &length);

    int list [length];

    int i = 0;
    for(i = 0; i < length; i++)
    {
        scanf("%d", &list[i]);
        if (i > 0 && min(list[i], list[i-1]) < lowest)
            lowest = min(list[i], list[i-1]);
        else if(i == 0)
            lowest = list[i];
    }
    printf("%d", lowest);

    return 0;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

