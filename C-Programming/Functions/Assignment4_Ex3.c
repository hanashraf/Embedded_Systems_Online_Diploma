/* Assignment 4 Question 3
   C program to reverse a sentence using recursion */



#include <stdio.h>

void reverse ()
{
    char c;
    scanf("%c", &c);
    if (!(c == '\n')){
        reverse();
        printf("%c",c);
    }
}

int main()
{

    printf("Enter a sentence : ");
    reverse();
    return 0;
}

/*

Extra : C program to reverse a sentence using strings

#include <stdio.h>
#include <string.h>
void reverse (char str [] , int length)
{
    char str2[(length+1)];
    int j =0;
    str2[(length+1)] = '/0';
    for(int i = length ; i>=0 ; i--){
        str2[i]=str[j];
        j++;
    }
    for(int i = 0 ; i<=length ; i++){
       printf("%c",str2[i]); 
    }
}

int main()
{
    char str [100];
    printf("Enter a sentence : ");
    gets(str);
    int length = strlen(str);
    reverse(str,length);
    return 0;
}

*/