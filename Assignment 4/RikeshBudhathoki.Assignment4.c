//
// RikeshBudhathoki.Assignment4.c
// Programs
//
//Created by Rikesh Budhathoki on 10/19/23.
//

// Declaration of header files
#include <stdio.h>
#include <math.h>

// Main function
int 
main(void)
{
    // Declaration of variables 
    double principal;
    double annual_interest;
    double monthly_interest;
    double interest;
    double payment;
    int term;
    double new_principal;
    double monthly_payment;

    printf("Enter the principal> ");        // Ask the user to input for principal.
    scanf("%lf",&principal);                // Store the value of principal in the variable
    printf("Enter the annual interest> ");  // Ask the user to input for annual interest
    scanf("%lf",&annual_interest);          // Store the value of annual interest in  the given variable
    printf("Enter the total number of payments> ");     // Ask the user for number of payments
    scanf("%d",&term);                                  // Store the value in the variables 


// Calculation to get the monthly payment using given formula 
    monthly_payment = ((annual_interest/1200)*principal)/(1-(1/pow((1+(annual_interest/1200)),term)));


    // Displaying the given input to the user. 

    printf("\nPrincipal          %0.2f",principal);
    printf("\nAnnual Interest    %0.2f",annual_interest);
    printf("\nPayment            %0.2f",monthly_payment);
    printf("\nTerm               %d",term);

    // Share the value to amother variable to display the value 
    payment = monthly_payment;
printf("\n\n\n");
printf("Payment    Interest              Principal       Principal Balance\n");
printf("___________________________________________________________________\n");
// Using loop statement to calculate for monthly pay
    for (int i=1; i<=term; i++)
    {
        // Calculating monthly interest rate
        monthly_interest = 0.0075*principal;

        // Calculating monthly payments 
        new_principal = monthly_payment - monthly_interest;

        // Calculating the remaining amount
        principal = principal - new_principal;

        // Displays the result to the user
        
        printf("%d",i);
        printf("%14.2lf",monthly_interest);
        printf("%24.2lf",new_principal);
        printf("%16.2lf\n",principal);
    }

    // Disp[ay the remaining amount 
    printf("___________________________________________________________________\n");
    printf("Final payment %0.2lf\n",payment);
}

