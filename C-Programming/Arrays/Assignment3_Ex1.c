/* 
	Assignment 3    Question 1
  	C Program (2 arrays summation) 
*/

#include <stdio.h>

int main()
{
    printf("Enter elements of first matrix \r\n");
    float arr1[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter a1[%d][%d]", (i+1) , (j+1));
            scanf("%f", &arr1[i][j]);
        }
        
    }
    printf("Enter elements of second matrix \r\n");    
    float arr2[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter a2[%d][%d]", (i+1) , (j+1));
            scanf("%f", &arr2[i][j]);
        }
        
    }
    printf("Sum is : \r\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%.1f  ", (arr1[i][j]+arr2[i][j]));
        }
        printf("\r\n");
    }    
        
    return 0;
}

