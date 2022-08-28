//Write a program in C to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *ptr = str;
    printf("Input a string :");
    gets(str);
    printf("Reverse of the string is :");
    for(char i=strlen(str) ; i>=0 ; i--)
        printf("%c",*(ptr+i));

    return 0;
}
