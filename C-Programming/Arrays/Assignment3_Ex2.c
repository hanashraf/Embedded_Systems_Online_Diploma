/* 
	Assignment 3    Question2
  	C Program (calculating array average)
*/

#include <stdio.h>

int main()
{
    int count;
    float sum=0;
    printf("Enter the number of elements");
    scanf("%d", &count);
    float arr1[count];
    for(int i=0;i<count;i++){
            printf("%d.Enter a number", (i+1));
            scanf("%f", &arr1[i]);
            sum += arr1[i];
        }
    printf("Average is %.2f  ", (sum/count));

    return 0;
}
