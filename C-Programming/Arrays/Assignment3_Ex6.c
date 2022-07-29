/* 
	Assignment 3 Question 6
  	Program to find the frequency of characters in a string
*/


#include <stdio.h>

int main()
{
    char arr[1000];
    char letter;
    int count = 0;
    printf("Enter a string : ");
    gets(arr);
    printf("Enter a character to find its frequency : ");
    scanf("%c",&letter);
    for(int i=0;(arr[i]!= '\0');i++)
    {
        if(arr[i]==letter)
            count++;
    }
    printf("Frequency of %c is : %d  ",letter,count);
    return 0;
  
}
