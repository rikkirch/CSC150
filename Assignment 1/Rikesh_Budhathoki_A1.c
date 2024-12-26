/*
  This program is written by
  Rikesh Budhathoki
  29th August 2023
  This program helps to calculate the total cost of transportation at a certain rate.
*/
#include <stdio.h> //declaring header files
int main() // main function
{
    float beg,en,mil,reb; // declaring variables
    printf("Enter beginning odometer reading => "); //Ask the user to input the initial odometer reading
    scanf("%f",&beg); // store the initial odometer reading in 'beg' variable
    printf("Enter ending odometer reading => "); // Ask the user to input the final odometer reading
    scanf("%f",&en);// store the final odometer reading in 'en' variable
    mil=en-beg; // calculate the total miles travelled
    printf("You travelled %0.1f miles.",mil); // Display the total miles travelled
    printf("\n");
    reb=0.35*mil;// Calculate the reimbursement at $0.35 per mile.
    printf("At $0.35 per mile, your reimbursement is %0.2f",reb); // Display the total reimbursement.
    return 0;
}
