#include <stdio.h>
#include <stdlib.h>

/*Good practice: declare the structure outside of the function to be able to use it anywhere in the file */
struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
  struct date today, *pToday;

  pToday=&today;

  pToday->day=21;
  pToday->month=10;
  pToday->year=1978;

  printf("Today is the following date: %d-%d-%d. \n", pToday->day, pToday->month,pToday->year);
  printf("Today is the following date: %d-%d-%d. \n", (*pToday).day, (*pToday).month, (*pToday).year);

    return 0;
}
