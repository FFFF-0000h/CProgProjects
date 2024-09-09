#include <stdio.h>
int main (void)
{
    /*
        This program calculates the remaining balance on a loan after the first, second, and
third monthly payments.
    */
   
    float Loan, First_MnthBal, Second_MnthBal, Third_MnthBal, INTEREST_RATE, MNTH_PAY, MNTH_RATE;
    printf("Enter amount of loan: ");
    scanf("%f", &Loan);
    printf("Enter interest rate: ");
    scanf("%f", &INTEREST_RATE);
    printf("Enter monthly payment: ");
    scanf("%f", &MNTH_PAY);
    MNTH_RATE = (INTEREST_RATE / 100) / 12;
    printf("Balance remaining after first payment: $%.2f\n", First_MnthBal = (20000 - MNTH_PAY) + (20000 * MNTH_RATE));
    printf("Balance remaining after second payment: $%.2f\n", Second_MnthBal = (First_MnthBal - MNTH_PAY) + (First_MnthBal * MNTH_RATE));
    printf("Balance remaining after third payment: $%.2f\n", Third_MnthBal = (Second_MnthBal - MNTH_PAY) + (Second_MnthBal * MNTH_RATE));
}