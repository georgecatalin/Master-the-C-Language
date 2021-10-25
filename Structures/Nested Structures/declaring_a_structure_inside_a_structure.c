#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct dateAndTime
    {
        struct date
        {
            int day;
            int month;
            int year;
        } sDate;

        struct time
        {
            int hours;
            int minutes;
            int seconds;
        } sTime;

    };

    struct dateAndTime thisStruct={
                                    {21,10,1978},
                                    {15,11,22}
    };

    return 0;
}
