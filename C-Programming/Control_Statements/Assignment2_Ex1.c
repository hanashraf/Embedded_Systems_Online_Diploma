/* Assignment 2 Question 1
   Program to check whether the number entered by user is odd or even */

#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer you want to check :");
    scanf("%d",&x);
    if((x%2)==0)
        printf( "%d is even",x);
    else
        printf("%d is odd",x) ;
    return 0;
}
