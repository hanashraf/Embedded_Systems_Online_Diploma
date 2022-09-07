/*Write a program in C to show a pointer to an array which contents
are pointer to structure.*/
#include <stdio.h>

struct Semployee
{
    char *name;
    int id;
};


int main()
{
    struct Semployee emp1 = {"John",1001} , emp2 = {"Alex",1002} , emp3 = {"Taylor",1003};
    struct Semployee (*arr[]) = {&emp1 , &emp2 , &emp3};
    struct Semployee *((*ptr)[3]) = &arr;
    //Printing emp1
    printf("Name : %s",(**(*ptr)).name);
    printf("\nID : %d",(**(*ptr)).id);
    //Printing emp2
    printf("\nName : %s",(**(*ptr+1)).name);
    printf("\nID : %d",(**(*ptr+1)).id);
    //Printing emp3
    printf("\nName : %s",(**(*ptr+2)).name);
    printf("\nID : %d",(**(*ptr+2)).id);
    return 0;
}
