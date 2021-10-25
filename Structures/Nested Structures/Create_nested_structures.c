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

    struct dataAndTime
    {
        struct date sDate;
        struct time sTime;
    };



    struct dataAndTime thisStruct;

    thisStruct.sDate.day=21;
    thisStruct.sDate.month=10;
    thisStruct.sDate.year=1978;
    thisStruct.sTime.hours=15;
    thisStruct.sTime.minutes=30;
    thisStruct.sTime.seconds=22;


    /*Good practice: second way to define a struct variable */
    struct dataAndTime thisStruct1={
                                        {11,9,2011},
                                        {21,10,11}
                                    };


    /* Good practice: third way to define a struct variable */
    struct dataAndTime thisStruct2={
                                        {.day=21,.month=10,.year=1978},
                                        {.hours=21, .minutes=11,.seconds=29}
                                    };



    return 0;
}
