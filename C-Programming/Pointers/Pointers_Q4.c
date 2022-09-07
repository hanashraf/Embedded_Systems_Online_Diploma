/* Write a program in C to print the elements of an array in reverse
order.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Input the number of elements to store in the array (max 15) :");
    scanf("%d",&count);
    int arr[count];
    int *ptr = arr;
    for (int i = 0 ; i < count ; i++)
    {
        printf("element-%d:",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("\nThe elements of array in reverse order are :");
    for (int i = count ; i > 0 ; i--)
    {
        printf("\nelement-%d:%d",i,*(ptr+(i-1)));
    }

    return 0;
}
