//Header file declaration
#include <stdio.h>

//Header file for sqrt function
#include <math.h>

//Definition of a constant value
#define C 1086

//Function prototype
void display();
float store();
void process(float temp);
void result(float answer);

// Main function
int main()
{
    //Display the headline
    printf("                         CALCULATOR TO CALCULATE THE SPEED OF SOUND WHEN TEMPERATURE IS GIVEN\n\n\n\n");

    // Function call to display sub function
    display();

    // Function call to store the user given input and store the returned value in 'value' variable
    float value = store();

    // Function call to calculate the speed of sound in air
    process(value);

    //Declaration to end the program
    return 0;
}

//sub function to display information to the user
void display()
{
    //Ask the user to input the temperature
    printf("Enter the temperature in fahrenheit >");

}

//Sub function to take input from the user
float store()
{
    //Declare the variable
    float temp;

    // Store the value of user given input
    scanf("%f",&temp);

    //return the value of input in main function
        return (temp);
}

//Sub function to calculate formula
void process(float temp)
{
    //Calculate the speed of sound and store in 'store' variable
    float speed = C * sqrt ((5*temp + 297) / 247);

    //Pass the value in result subfunction
    result(speed);

}
//Sub function to display the result
void result(float answer)
{
    //Display the result
    printf("The speed of sound of air in given temperature is %0.1f",answer);
}
