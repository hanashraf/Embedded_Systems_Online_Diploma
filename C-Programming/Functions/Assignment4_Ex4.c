/* Assignment 4 Question 2
   C program to calculate power of a number using recursion */




#include <stdio.h>

int power (int b , int p)
{

    if (!(p == 0))
        return  b * power(b,(p-1));
    else    
        return 1;
    
}




int main()
{   int b , p;
    printf("Enter a base number : ");
    scanf("%d",&b);
    printf("Enter power number (positive number) : ");
    scanf("%d",&p);
    int result = power(b,p);
    printf("%d ^ %d = %d ",b , p , result );
    return 0;
}
