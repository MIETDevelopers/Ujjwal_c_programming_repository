/*NAME:UJJWAL SHARMA
PURPOSE:TO FIND THE MAXIMUM ELEMENT IN AN ARRAY */
#include<stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main() //STARTING OF MAIN PROGRAM
{
int i; // DECLARING VARIABLES NAMED "i"
float arr[5]; // DECLARING ARRAY OF SIZE 5 WITH FLOAT DATA TYPE 
scanf("%f", arr);
printf("Please enter five numbers: \n"); // PRINT FIVE ELEMENT OF AN ARRAY

for (i = 0; i < 5; ++i) //FOR-LOOP(INITIALIZATION;CONDITION;INCREMENTATION/DECREMENTATION)
{

    scanf("%f", &arr[i]);     //READ USER INPUT
}

for (i = 1; i < 5; ++i)     //FOR-LOOP(INITIALIZATION;CONDITION;INCREMENTATION/DECREMENTATION)
{
    if (arr[0] < arr[i])    //IF-STATEMENT
        arr[0] = arr[i];
}
printf("Largest element = %.2f", arr[0]);   //PRINT OUTPUT OF THE PROGRAM

return 0;   //RETURN STATEMENT
}