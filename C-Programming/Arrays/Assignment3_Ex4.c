/* 
	Assignment 3 Question 4
        C Program (Insertan element in an array) 
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
            arr1[i]= i+1;
            printf("%d  ", arr1[i]);
    }
    printf("\r\n");
    printf("Enter an element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the location: ");
    scanf("%d", &location);
    arr1[(location-1)]=element;
    for(int i=0;i<count;i++){
            if ((location-1)==i){
                printf("%d  ",  arr1[(location-1)]);
                continue;}
            arr1[i]= i+1;
            printf("%d  ", arr1[i]);
    }
    return 0;
}
