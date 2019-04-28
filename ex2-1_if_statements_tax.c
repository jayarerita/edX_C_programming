/*
You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.

Example
Input
5
6
Output
Special tax
36

*/

#include <stdio.h>

int main(void)
{
    int die1 = 0, die2 = 0, sum = 0, tax = 0;

    scanf("%d%d", &die1, &die2);

    sum = die1 + die2;

    if (sum >= 10)
    {
        printf("Special tax\n");
        printf("36");
    }
    else
    {
        printf("Regular tax\n");
        printf("%d", 2 * sum);
    }

    return 0;
}


