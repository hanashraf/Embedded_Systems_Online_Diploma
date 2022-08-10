//C program to store information of students using structure

#include <stdio.h>

struct SStudent
{
    char name [50];
    int mark;
};



int main()
{
    struct SStudent student [10];
    
    printf("Enter information of students \r\n");
    for(int i=0 ; i <10 ; i++)
    {
        printf("For roll number %d:", (i+1));
        printf("\r\nEnter name:");
        scanf("%s", student[i].name);
        printf("Enter marks:");
        scanf("%d", &student[i].mark);
    }
    
    
    printf("\r\nDisplaying information of students:");
    for(int i=0 ; i <10 ; i++)
    {

        printf("\r\nInformation for roll number %d:", (i+1));
        printf("\r\nName: %s ",student[i].name);
        printf("\r\nMark: %d ",student[i].mark);
        
    }

    return 0;
}