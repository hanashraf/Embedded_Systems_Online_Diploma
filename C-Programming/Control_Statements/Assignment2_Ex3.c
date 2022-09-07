/* Assignment 2  Question 3
   Program to find the largest number among three numbers */

#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;
    float max;
    printf("Enter three numbers :");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    max = ((x>y)?((x>z)?(max=x):(max=y)):((y>z)?(max=y):(max=z)));
    printf("Largest nember : %.2f",max);
    return 0;
}
