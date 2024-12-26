/* Author: Rikesh Budhathoki       */
/* Created Date: October 12, 2023  */
/* Revised by:          */
/* Revision Date:       */

//Declaration for header file
#include <stdio.h>

//Defining macro constant
#define weekday_minutes_basic 600
#define flat_rate 39.99
#define additional_weekday_min_cost 0.40
#define tax_rate 5.25

//Main function
int main()
{

    printf("                            \n\n\n\n           WEEKDAY BILLING SYSTEM\n\n\n\n");

    //Declaring variables
    int week,night,weekend,over;
    float tax,avg,total,fin;

    //Asking for inputs
    printf("Enter the weekday minutes used> ");
    scanf("%d",&week); //store the given input in the following variable
    printf("Enter the night minutes used> ");
    scanf("%d",&night);
    printf("Enter the weekend minutes used> ");
    scanf("%d",&weekend);

    //condition if the customer has used upto limit
    if (week <= 600)
    {
        //calculations
        total=flat_rate;
        over=0;
        avg=total/week;
        tax=total*0.0525;
        fin=total+tax;
    }

    //applicable if customer has gone above the limit i.e. above 600 minutes
    else
    {

        over=week-weekday_minutes_basic;
        total=flat_rate+(over*additional_weekday_min_cost);
        avg=total/week;
        tax=total*0.0525;
        fin=(total+tax);
    }

    //Displaying results
    printf("\n\n\n\n\n\n");
    printf("Your weekday minutes used are: %d\n",week);
    printf("Your night minutes used are: %d\n",night);
    printf("Your weekend minutes used are: %d\n",weekend);
    printf("You used %d minutes over the 600 flat rate weekday limit.\n",over);
    printf("Your total tax is $ %0.2f\n",tax);
    printf("Your average cost per minute before tax is %0.2f\n",avg);
    printf("Your total bill is $%0.2f",fin);

    //declaration of ending the program

    return (0);
}
