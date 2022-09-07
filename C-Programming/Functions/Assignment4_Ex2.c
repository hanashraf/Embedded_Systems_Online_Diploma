/* Assignment 4 Question 2
   C program to calculate factorial of a number using recursion */


#include <stdio.h>
int factorial(int x){
    if (x!=1)
        return x * (factorial(x-1));
}
int main()
{
    int x ;
    printf("Enter a positive integer: ");
    scanf ("%d",&x );
    int result = factorial(x);
    printf("Factorial of %d is %d",x,result);
    return 0;
}
