/* 
    Assignment:1  Question:7
    C program that swaps the values of two integers
    (Without using a temporary integer)
*/

#include <stdio.h>

int main()
{
    int a , b ;
    printf("Enter a value for a : ");
    scanf("%d",&a);
    printf("Enter a value for b : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping, value of a : %d \r\n",a);
    printf("After swapping, value of b : %d",b);
    return 0;
}
