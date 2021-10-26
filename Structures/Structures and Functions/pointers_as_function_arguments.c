#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char familyName[50];
    char motherName[20];
    char fatherName[20];
};


bool isSibling_without_pointers(struct Family thisFamily1, struct Family thisFamily2)
{
    if(strcmp(thisFamily1.motherName,thisFamily2.motherName)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//Good practice: By using pointers to structures as arguments we avoid consumption of memory, cause when passing without pointers the structures are copied. And also, another advantage is faster processing time for passing with pointers */
bool isSibling_with_Pointers(struct Family *pThisFamily1, struct Family *pThisFamily2)
{
    if(strcasecmp(pThisFamily1->motherName,pThisFamily2->motherName)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//Good practice: Set the function arguments to avoid modification of the structs to which the pointers are pointing to
bool isSibling_with_Pointer_with_pointed_to_protection(const struct Family *pThisFamily1, const struct Family *pThisFamily2)
{
    if(strcmp(pThisFamily1->motherName,pThisFamily2->motherName))
    {
        return true;
    }
    else
    {
        return false;
    }
}


//Good practice: set the function arguments to avoid the modification of the pointer
bool isSibling_with_Pointer_with_pointed_to_protection_to_Pointers(struct Family *const pThisFamily1, struct Family *const pThisFamily2)
{
    if(strcmp(pThisFamily1->motherName, pThisFamily2->motherName))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main(void)
{




    return 0;
}
