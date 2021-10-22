#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    /* Good practice: How to define an array of structures */
    struct car
    {
        int width;
        int height;
        int enginePower;
    };

    struct car thisArray[5];

    thisArray[0].width=100;
    thisArray[0].height=250;
    thisArray[0].enginePower=355;

    thisArray[1].width=200;
    thisArray[1].height=254;
    thisArray[1].enginePower=245;

    struct car bCar[3]={[2]={23,44,22}};

    struct car cCar[5]={
                        {122,33,44},
                        {23,233,22},
                        {232,233,33},
                        {344,22,33},
                        {23,233,22}
                        };


    printf("These are the values of the parameters in the 1st element of the array: width=%d, height=%d, engine power=%d.\n", thisArray[0].width, thisArray[0].height, thisArray[0].enginePower);

    /* Good practice: this is another way how to initialize an array of structures */
    struct day
    {
        int day;
        int month;
        int year;
    };

    struct day birthdays[4]={
                                {8,7,1977},
                                {21,10,1978},
                                {13,11,2011},
                                {22,12,1989}
                            };

    printf("These are the values of the parameters in the 1st element of the array: width=%d, height=%d, engine power=%d.\n", birthdays[0].day, birthdays[0].month, birthdays[0].year);

    /* Good practice: structures can contain arrays within its members */
    struct month
    {
        int number;
        char abbreviation[3];
    };

    struct month anotherMonths[3];

     anotherMonths[0].number=1;
     anotherMonths[0].abbreviation[0]='o';
     anotherMonths[0].abbreviation[1]='c';
     anotherMonths[0].abbreviation[2]='t';

     anotherMonths[1].number=1;
     strcpy(anotherMonths[0].abbreviation,"jun");

     printf("The member is %d ; \t %s",anotherMonths[0].number,anotherMonths[0].abbreviation);


    return 0;
}
