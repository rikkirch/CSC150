/* Author: Rikesh Budhathoki             */
/* Created Date: 7th November 2023       */
/* Revised by:          */
/* Revision Date:       */

/* ---- This program verifies the 12 digit barcode for Universal Product Codes comparing its check digits usinvg array. ---- */
    /* Statement of input(s) */
    /* Statement of output(s) */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */
#include <stdio.h>
/* Main function */
int 
main(void)
{
    /* Declaration of variables */
    int a[12];
    int odd = 0;
    int even = 0;
    int last_digit;
    int check_digit;

    /* Display to enter the inputs from the user */
    printf("Enter the 12 digits of a barcode>\n");
    printf("Separate each digit with an <enter>\n");

    /* Loop function to take 12 inputs */
    for (int i=0; i<12; i++)
    {
        /* Take inputs in a array. */
        scanf("%d",&a[i]);
    }
    /* To calculate the odd numbered digit */
    for (int i=0; i<12; i+=2)
    {
        odd = odd + a[i];
    }

    /* Multiply the odd numbered digit with 3 as instructed */
    odd *= 3;
    /* To calculate the even numbered digit */
    for (int i=0; i<10; i+=2)
    {
        even = even + a[i+1];
    }
    
    even += odd;
    /* To take last digit from the obtained number */
    last_digit = even % 10;
    /* To find check digit */
    if (last_digit == 0)
    {
        check_digit = last_digit;
    }
    else
    {
        check_digit = 10 - last_digit;
    }

    /* Condition to verify if the barcode is validated or not */
    if(check_digit == a[11])
    {
        printf("---> barcode is validated\n\n");
    }
    else
    {
        printf("---> error in barcode\n\n");
    }
    
    /* Display the odd numbered barcode value and even numbered barcode value */
    printf("Odd numbered barcode value = %d\n",odd);
    printf("Even numbered barcode value = %d\n",even);

    /* End of program */
    return (0);
}