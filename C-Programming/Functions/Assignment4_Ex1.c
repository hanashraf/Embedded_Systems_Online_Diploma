/* Assignment 4 Question 1
   Prime numbers between two intervals by making user-defined function */

#include <stdio.h>
int primeCalc(int count){
    int flag = 1;
    for(int i =2 ; i < count ; i++)
    {
        if((count%i)==0){
            flag = 0;
            break;}
    }
    return flag;
}
int main()
{
    int x , y ;
    int count;
    printf("Enter two number (intervals): ");
    scanf ("%d %d",&x , &y);
    printf("Prime numbers between %d and %d are : " , x ,y);
    for (count = x ; count <= y ; count++){
        int flag = primeCalc(count);
        if(flag)
            printf("%d ",count);
        else
            continue;
    }
    return 0;
}
