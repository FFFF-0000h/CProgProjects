#include <stdio.h>
#define FIVEPERCENT_TAX (5.0/100) //#define is a preprocessor macro for defining constants, which in this case is the FIVEPERCENT_TAX

int main (void)
{
    float dollsCent, taxAdded;
    printf("Enter a dollars-and-cents amount (E.g; 100.00): ");
    scanf("%f", &dollsCent);
    printf("The amount with 5 percent tax added is: $%.2f\n", taxAdded = dollsCent * FIVEPERCENT_TAX + dollsCent);
    //The %.2f means that it will display the output with only 2 digits after the decimal point since by default %f displays a number with 6 digits after the decimal point
}