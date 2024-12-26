/*
  This program is written by
  Rikesh Budhathoki
  29th August 2023
  This program helps to calculate the total cost of transportation at a certain rate.
  It asks for the beginning and ending odometer readings, calculates the total miles
  traveled, and provides the reimbursement based on a rate of $0.35 per mile.
*/

#include <stdio.h> // Declaring header files for input/output

int main() // Main function
{
    float beg, en, mil, reb; // Declaring variables for beginning reading, ending reading, miles, and reimbursement

    // Displaying program introduction
    printf("Transportation Reimbursement Calculator\n");
    printf("----------------------------------------\n");

    // Input beginning odometer reading with validation
    printf("Enter beginning odometer reading (in miles): ");
    while (scanf("%f", &beg) != 1 || beg < 0) {
        printf("Invalid input. Please enter a valid positive number for the beginning odometer reading: ");
        while(getchar() != '\n'); // clear the buffer
    }

    // Input ending odometer reading with validation
    printf("Enter ending odometer reading (in miles): ");
    while (scanf("%f", &en) != 1 || en <= beg) {
        printf("Invalid input. Please enter a valid ending odometer reading greater than the beginning reading: ");
        while(getchar() != '\n'); // clear the buffer
    }

    // Calculate the total miles traveled
    mil = en - beg;
    printf("You travelled %.1f miles.\n", mil); // Display the total miles traveled

    // Calculate the reimbursement at a rate of $0.35 per mile
    reb = 0.35 * mil;
    printf("At $0.35 per mile, your reimbursement is $%.2f.\n", reb); // Display the total reimbursement

    // End of the program
    printf("----------------------------------------\n");
    printf("Thank you for using the Transportation Reimbursement Calculator!\n");

    return 0; // End of program
}
