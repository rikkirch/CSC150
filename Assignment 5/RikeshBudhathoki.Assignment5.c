/* Author: Rikesh Budhathoki       */
/* Created Date: November 2, 2023  */
/* Revised by:          */
/* Revision Date:       */

/* Assignment 5 */
/* This program allows the user to dispense a change. The user enters the amount, in bills only,
 to be deposited into the machine. The machine reads a text file (database) that contains 
 the current change in the machine.*/

 /* Header files */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* function prototype */
void instructions(double *inventory, int *bill);

/* main function */
int 
main(void)
{
   
    int bill;               /* user entered bill */
    double inventory;
    FILE *inp;              /* pointer to input file */
    FILE *outp;             /* pointer to output file */

    /* Displays the accepted bill */
    printf("Enter the denomination of the bill to exchange > ");
    scanf("%d",&bill);
    bill = abs(bill);           /* convert to positive integer */
    printf("\nYou entered $%d.00.\n\n",bill);

    if (bill !=1 && bill != 5 && bill !=10 && bill !=20 && bill !=50 )
    {
        printf("Please enter a 1,5,10,20 or 50 dollar bill.\n");
        return 0;
    }

    /* Get beginning inventory */
    inp = fopen("inventory.txt","r");
    fscanf(inp, "%lf", &inventory);
    fclose(inp);

    /* Calculate available change */
    instructions(&inventory, &bill);    /* function call */

    outp = fopen("inventory.txt","w");  /* Write the  new inventory to the external file */
    if ((inventory - bill)<=100)
    fprintf(outp, "%.2f\n", inventory - bill);
    fclose (outp);

    /* Display inventory beginning balance and ending balance */
    printf("\n\n*** For Management only ***\n");
    printf("Beginning inventory: $%0.2f\n",inventory);
    printf("Ending inventory: $%0.2f\n",inventory- bill);

    return (0);


    /* sub function */
}
void instructions(double *inventory, int *bill)
{
    if (*inventory >= *bill)
    {
        printf("Please take a change. \n\n");
    }
    else 
    {
        printf("There is not enough change. Please try a smaller bill. \n\n");
    }

}