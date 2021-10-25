#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct dateAndTime
    {
        struct date sDate;
        struct time sTime;
    };

    struct dateAndTime myArray[100];

    /* Good practice: how to access the 3rd element of the array of structs */
    myArray[2].sDate.day=21;
    myArray[2].sDate.month=10;
    myArray[2].sDate.year=1978;
    myArray[2].sTime.hours=15;
    myArray[2].sTime.minutes=30;
    myArray[2].sTime.seconds=26;


    return 0;
}
