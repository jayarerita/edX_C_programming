/*
Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.

You may use functions to complete this exercise, but that is not required. However, you will need to use a comparison operation with characters, for example:

char letter = 'a';

if(letter == 'a') {...}

*/

#include <stdio.h>

void length(double);
void weight(double);
void temp(double);

int main(void)
{
    char type = '\0';
    int number = 0;
    double value_in = 0;

    scanf("%d", &number);

    int i = 0;
    for (i = 0; i < number; i++)
    {
        scanf("%lf %c", &value_in, &type);

        if( type == 'm')
            length(value_in);
        else if(type == 'g')
            weight(value_in);
        else
            temp(value_in);
    }
    return 0;
}

void length(double x)
{
    double y = 0;
    y = x / 0.3048;

    printf("%.6lf ft\n", y);
}

void weight(double x)
{
    x = x * 0.002205;
    printf("%.6lf lbs\n", x);
}

void temp(double x)
{
    double y = 0;
    y = x * 1.8 + 32;
    printf("%.6lf f\n", y);
}

