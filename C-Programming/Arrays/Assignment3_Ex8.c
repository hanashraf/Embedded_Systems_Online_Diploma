/* 
	Assignment 3 Question 8
  	C Program to reverse String without using Library function 
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str [100];
    char str2 [100];
    printf("Enter the string : ");
    gets(str);
    int count = strlen(str); 
    for(int i = 0 ; i<=strlen(str) ; i++ ){
       if  (str[i] == '/0')
            break;
       else
            str2[count]=str[i];
            count--;
    }
    str2[(strlen(str)+1)]=0;
    printf("Reverse string is :") ;
    for(int i = 0 ; i<=strlen(str) ; i++ )
    {
    printf("%c",str2[i]);
    }

    return 0;
}

