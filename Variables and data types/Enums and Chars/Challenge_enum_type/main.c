#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum Company firstVariable;
    firstVariable=XEROX;

    enum Company secondVariable;
    secondVariable=GOOGLE;

    enum Company thirdVariable;
    thirdVariable=EBAY;


    printf("The value of XEROX is %d.\n",firstVariable);
    printf("The value of GOOGLE is %d.\n",secondVariable);
    printf("The value of EBAY is %d.\n",thirdVariable);

    return 0;
}
