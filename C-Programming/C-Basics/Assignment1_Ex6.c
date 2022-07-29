/* 
    Assignment:1  Question:6
    C program that swaps the values of two integers
    (Using a temporary integer)
*/

#include <stdio.h>

int main()
{
    int a , b , temp ;
    printf("Enter a value for a : ");
    scanf("%d",&a);
    printf("Enter a value for b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a : %d \r\n",a);
    printf("After swapping, value of b : %d",b);
    return 0;
}