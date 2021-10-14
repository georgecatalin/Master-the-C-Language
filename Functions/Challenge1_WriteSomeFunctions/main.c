#include <stdio.h>
#include <stdlib.h>

int findGreatestCommonDivisor(int number1, int number2);
int calculateAbsoluteValueOfNumber(float number);
float calculateSquareRootOfNumber(float number);

int main()
{
    int number1=15;
    int number2=25;

    printf("Calculate the Greatest Common Divisor of %d and %d is %d \n",number1, number2,findGreatestCommonDivisor(number1,number2));

    int number=-35;
    printf("The Absolute Value of %d is %d\n", number,calculateAbsoluteValueOfNumber(number));

    float number3=25.0f;
    printf("The value of square root for %f is %f.\n", number3,calculateSquareRootOfNumber(number3));

    return 0;
}

int findGreatestCommonDivisor(int number1, int number2)
{
    /* Greatest Common Divisor (GCD) is the largest integer that divides both numbers */

    int returned_value=0;
    int remainder=0;

    if(number1==0)
        {
            returned_value=number2;
            return returned_value;
        }

    if(number2==0)
    {
            returned_value=number1;
            return returned_value;
    }

    remainder=number1%number2;

    return findGreatestCommonDivisor(number2,remainder);

}


int calculateAbsoluteValueOfNumber(float number)
{
   float returned_value=0.0f;

   if(number>=0)
    {
        returned_value=number;
    }
    else
    {
        returned_value=-number;
    }

    return returned_value;
}

float calculateSquareRootOfNumber(float number)
{
    if(number<0)
    {
        printf("You entered a negative number;");
        return (-1);
    }

    if(number==0 || number==1)
        return number;

    int i=0, result=0;

    while(result<=number)
    {
        i++;
        result=i*i;
        printf("%d : %d\n",i,result);
    }

    return (i-1);
}
