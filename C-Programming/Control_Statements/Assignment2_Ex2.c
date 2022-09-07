/* Assignment 2 Question 2
   Program to check vowel or constant */

#include <stdio.h>

int main()
{
    char x;
    printf("Enter an alphabet :");
    scanf("%c",&x);
    if(x== 'a'|| x== 'A')
        printf("%c is a vowel",x);
    else if (x== 'e'|| x== 'E')
        printf("%c is a vowel",x);
    else if (x== 'i'|| x== 'I')
        printf("%c is a vowel",x);
    else if (x== 'o'|| x== 'O')
        printf("%c is a vowel",x);
    else if (x== 'u'|| x== 'U')
        printf("%c is a vowel",x);
    else
        printf("%c is a constant",x);
    return 0;
}


