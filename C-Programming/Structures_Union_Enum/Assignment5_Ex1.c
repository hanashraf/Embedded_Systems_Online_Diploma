//Program to store information of a student using structure

#include <stdio.h>

struct SStudent
{
    char name [50];
    int roll_num;
    float mark;
};



int main()
{
    struct SStudent student;
    
    printf("Enter information of students \r\n");
    printf("Enter name:");
    scanf("%s", student.name);
    printf("Enter roll number:");
    scanf("%d", &student.roll_num);
    printf("Enter marks:");
    scanf("%f", &student.mark);
    
    printf("\r\nDisplaying information \r\n");
    printf("Name: %s \r\n",student.name);
    printf("Roll number: %d \r\n",student.roll_num);
    printf("Mark: %f \r\n",student.mark);

    return 0;
}
