#include <stdio.h>

int main (void)
{
        /*
        This program asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
            Enter a dollar amount: 93
$20 bills:  4
$10 bills:  1
$5 bills:   0
$1 bills:   3
    */
   
    int DollarAmt, TwentyBill, remainder0, remainder1, remainder2, TenBill, FiveBill, OneBill;
    printf("Enter a dollar amount: ");
    scanf("%d", &DollarAmt);
    TwentyBill = DollarAmt / 20;
    printf("$20 bills: %d\n", TwentyBill);
    remainder0 = DollarAmt - (20 * TwentyBill);
    printf("$10 bills: %d\n", TenBill = remainder0 / 10);
    remainder1 = remainder0 - (10 * TenBill);
    printf("$5 bills: %d\n", FiveBill = remainder1 / 5);
    remainder2 = remainder1 - (5 * FiveBill);
    printf("$1 bills: %d\n", OneBill = remainder2 / 1);
}