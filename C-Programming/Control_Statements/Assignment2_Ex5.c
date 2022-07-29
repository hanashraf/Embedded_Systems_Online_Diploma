/* Assignment 2 Question 5
   C program to check whether a character is an alphabet or not */

#include <stdio.h>

int main()
{
    char x;
    printf("Enter a character :");
    scanf("%c",&x);
    if(((x>= 65) && (x <= 90))||((x>= 97) && (x <= 122)) )
        printf("%c is an alphabet",x);
    else
        printf("%c is not an alphabet",x);
    return 0;
}



