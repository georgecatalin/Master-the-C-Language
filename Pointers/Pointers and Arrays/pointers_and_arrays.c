#include <stdio.h>
#include <stdlib.h>

int sum_elements_in_array(int myArray[], const int n);

int main(void)
{
    int arr[]={1,3,5,6,3,5,8};

    printf("The sum of the elements in the array is \t %d.\n", sum_elements_in_array(arr,7));

    return 0;
}

int sum_elements_in_array(int myArray[],const int n)
{
    int sum=0;
    int *pArray=NULL;

    int *const arrayMargin=myArray+n;

    for(pArray=myArray;pArray<arrayMargin;pArray++)
    {
        sum+=*pArray;
        printf("Element %d : sum %d \n",*pArray, sum );
    }

    return sum;
}
