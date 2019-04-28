/*
In this problem you will continue developing the data feature which you started implementing in the previous problem. You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.
*/


#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here

void readDate(struct date *ptr)
{
    scanf("%d %d %d", &ptr->year, &ptr->month, &ptr->day);
}

void printDate(struct date thisDay)
{
    if(thisDay.month < 10)
        printf("0");
    printf("%d/", thisDay.month);
    if(thisDay.day < 10)
        printf("0");
    printf("%d/%d\n", thisDay.day, thisDay.year);
}

struct date advanceDay(struct date thisDay)
{
    struct date nextDay = thisDay;
    
    if((thisDay.month == 1 || thisDay.month == 3 || thisDay.month == 5  || thisDay.month == 7 || thisDay.month == 9 || thisDay.month == 10 || thisDay.month == 12) && thisDay.day == 31)
    {
        if(thisDay.month == 12)
        {
            nextDay.month = 1;
            nextDay.year = thisDay.year + 1;
        }
        else
        {
            nextDay.month = thisDay.month + 1;
        }
        nextDay.day = 1; 
    }
    else if(thisDay.month == 2 && thisDay.day == 28)
    {
        nextDay.month = thisDay.month + 1;
        nextDay.day = 1;
    }
    else if(thisDay.day == 30)
    {
        nextDay.month = thisDay.month + 1;
        nextDay.day = 1;
    }
    else
    {
        nextDay.day = thisDay.day + 1;
    }
    return nextDay;
}
