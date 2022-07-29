/* 
	Assignment 3 Question 7
  	Program to find the length of the string
 */

#include <stdio.h>

int main()
{
    char arr[1000];
    int count = 0;
    printf("Enter a string : ");
    gets(arr);
    for(int i=0;(arr[i]!= '\0');i++)
    {
            count++;
    }
    printf("Legnth of string : %d  ",count);
    return 0;
  
}