/* 
  	Assignment 3   Question5
  	Program to search an element in an array
*/


#include <stdio.h>

int main()
{
    int count;
    int element;
    int location;
    printf("Enter no of elements: ");
    scanf("%d", &count);
    int arr1[30];
    for(int i=0;i<count;i++){
            arr1[i]= (11 * (i+1));
            printf("%d  ", arr1[i]);
    }
    printf("\r\n");
    printf("Enter the element to be searched : ");
    scanf("%d", &element);
    for(int i=0;i<count;i++){
            if ((arr1[i])== element){
                location = (i+1);
                break;}
    }
    printf("Number found at the location : %d " , location);
    return 0;
}