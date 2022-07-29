/* 
	Assignment 3 Question 3
        Array Transpose
*/


#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Enter rows and colums of matrix:\r\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Enter elements of matrix\r\n");
    float arr1[10][10];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Enter a1[%d][%d]", (i+1) , (j+1));
            scanf("%f", &arr1[i][j]);
        }
        
    }
    
    printf("Entered matrix:\r\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%.1f  ", arr1[i][j]);
        }
        printf("\r\n");
    } 
    
    printf("Transposed matrix :\r\n");
    for(int j=0;j<y;j++){
        for(int i=0;i<x;i++){
            printf("%.1f  ", arr1[i][j]);
        }
        printf("\r\n");
    } 
        

    return 0;
}
