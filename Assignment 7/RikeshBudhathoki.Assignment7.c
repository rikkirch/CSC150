/* Author: Rikesh Budhathoki             */
/* Created Date: 21st November 2023       */
/* Revised by:          */
/* Revision Date:       */

/* ---- This program places the smallest value in the initial array element,the second smallest in
 the next element, and so on. ---- */

    /* Statement of input(s) */
    /* Statement of output(s) */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */
#include <stdio.h>
/* Main function */
int 
main(void)
{
    /* Declaring variables */

    int a[4]; /* Array to take inputs from user */
    int b; /* Variable to swap two numbers */
    
    /* Take one input */
    printf("Enter a 2 digit integer>\n");

    /* Store in first place of array */
    scanf("%d",&a[0]);

    /* Take rest of inputs and store in rest of the place in array */
    for (int i=1; i<4; i++)
    {
        printf("Enter a different 2 digit integer>\n");
        scanf("%d",&a[i]);
    }

    /* Displays what user have entered */
    printf("You entered the numbers:\n");
    for (int i=0; i<4; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("The sorted list in ascending order is:\n");

    /* Arrange the numbers in ascending order */
    for (int i=0; i<3; i++)
    {
        for (int j=i+1; j<4; j++)
        {
            /* Exchange the position of the numbers if they are not in ascending order */
            if (a[i]>a[j])
            {
               b=a[i];
               a[i]=a[j];
               a[j]=b;
            }
        }
    }

    /* To print in ascending order */
    for (int i=0; i<4; i++)
    {
        printf("%d ",a[i]);
    }
    return 0; 
}