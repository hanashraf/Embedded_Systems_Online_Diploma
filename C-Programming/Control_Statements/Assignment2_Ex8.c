/* Assignment2 Question8
   C program to make a simple calculator */

#include <stdio.h>

int main()
{   char c;
    printf("Enter an operator + or - or / or *  :");
    scanf("%c",&c);
    float x;
    float y;
    printf("Enter two numbers :");
    scanf("%f",&x);
    scanf("%f",&y);
    switch(c){
    case '+':
        printf("The sum is %.2f",(x+y));
        break;
    case '-':
        printf("The subtraction is %.2f",(x-y));
        break;
    case '*':
        printf("The multiplication is %.2f",(x*y));
        break;
    case '/':
        printf("The division is %.2f",(x/y));
        break;
    default :
        printf("Invalid choice");
        break;
    }
    return 0;
}
