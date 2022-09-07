/* 
   Assignment:1   Question:2
   C Program to Print an Integer Entered by a User
*/

#include <stdio.h>

int main()
{
    int x;
    fflush(stdin); fflush(stdout) ;
    printf("Enter an integer : ");
    scanf("%d",&x);
    printf("You entered : %d",x);

    return 0;
}
