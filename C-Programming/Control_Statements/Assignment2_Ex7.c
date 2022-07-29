/* Assignment2 Question7
   Program to find factorial of a number */

#include <stdio.h>

int main()
{
    int mul = 1;
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x==0)
        printf("Factorial is 1");
    else if (x>0){
        for(int n =1 ; n<=x ; n++)
    {
            mul *= n;
    }
        printf("Factorial = %d", mul);
    }
    else
        printf("Error!,Factorial of negative number does not exist");

    return 0;
}
