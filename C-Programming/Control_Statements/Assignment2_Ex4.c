/* Assignment 2 Question 4
   Program to check whether a number is positive or negative */

#include <stdio.h>


int main()
{
    float x;
    printf("Enter a number:");
    scanf("%f",&x);
    if(x==0.0)
        printf("You entered zero");
    else if (x>0.0)
        printf("%.2f is positive",x);
    else
        printf("%.2f is negative",x);

    return 0;
}
