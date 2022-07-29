/* Assignment2 Question6
   C program to calculate sum of natural numbers */

#include <stdio.h>

int main()
{
    int sum =0;
    unsigned int x;
    printf("Enter an integer :");
    scanf("%d",&x);
    for(int n =1 ; n<=x ; n++)
    {
        sum += n;
    }
    printf("Sum = %d", sum);
    return 0;
}
