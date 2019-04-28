/*
Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

Examples
Input:
1 2 3 4 5 6
Output:
6 5 4 3 2 1

*/

#include <stdio.h>

void reverseArray(int []);

int main(void)
{
    int array[6];
    int i = 0;

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &array[i]);
    }
        printf("\n");

    reverseArray(array);

    for(i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

void reverseArray(int arr[])
{
    int j = 0, temp = 0;
    for(j = 0; j < 3; j++)
    {
        temp = arr[j];
        arr[j] = arr[5 - j];
        arr[5 - j] = temp;
    }
}

