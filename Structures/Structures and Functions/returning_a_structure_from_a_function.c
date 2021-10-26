#include <stdio.h>
#include <stdlib.h>


struct Account
{
    char savingsAccountName[50];
    double amountSavingsAccount;
    char investmentAccountName[50];
    double amountInvestmentAccount;
};


//Good practice: pass the structure to the function as an argument to the function. Use this only for small structures, for the sake of safety of data inside the structure since it is passed as a copy
double totalAmmount_safe_no_pointer(struct Account thisAccount)
{
    return thisAccount.amountSavingsAccount+thisAccount.amountInvestmentAccount;
}

/* Good practice: pass the pointer to a structure as an argument in the function for the following reasons. Warning: passing the pointer to the struct is risky for the data it points to cause during the function certain modifications can alter the actual data
=====
1. compatibility with older versions of C compilers
2. time processing and memory consumption efficiency
=====
*/
double totalAmmount_pass_by_pointer_unsafe(struct Account *pThisAccount)
{
    return pThisAccount->amountSavingsAccount+pThisAccount->amountInvestmentAccount;
}


/* Good practice: pass the pointer to a structure as an argument in the function for the same reasons as above ,but keeping it safe */
double totalAmmount_pass_by_pointer_safe(const struct Account *pThisAccount)
{
    return pThisAccount->amountSavingsAccount+pThisAccount->amountInvestmentAccount;
}



int main(void)
{
    struct Account George={"george savings",2345.55,"george investment", 5534.5};
    printf("The value using \t totalAmmount_safe_no_pointer \t is %.2f. \n", totalAmmount_safe_no_pointer(George));


    printf("The value using \t totalAmmount_pass_by_pointer_unsafe \t is %.2f. \n", totalAmmount_pass_by_pointer_safe(&George));

    printf("The value using \t totalAmmount_pass_by_pointer_safe \t is %.2f. \n", totalAmmount_pass_by_pointer_safe(&George));


    return 0;
}
