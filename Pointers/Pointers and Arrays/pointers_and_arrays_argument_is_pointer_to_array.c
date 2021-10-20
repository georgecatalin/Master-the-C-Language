#include <stdio.h>
#include <stdlib.h>

int sum_elements(int *array, const int n);

int main(void)
{
    int note[]={10,23,24,1,24,55,114,34};
    printf("The sum is calculated as %d.\n",sum_elements(note,8));

    return 0;
}

int sum_elements(int *array, const int n)
{
    int sum=0;

    int *const arrayUpperMargin=array+n;

    for(;array<arrayUpperMargin;array++)
    {
        sum+=*array;
        printf("The element is %d and the sum is %d.\n",*array,sum);

    }

    return sum;
}
