/*Write a program in C to demonstrate how to handle the pointers
in the program.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 29;
    printf("Address of m:0x%X",&m);
    printf("\nValue of m:%d",m);

    int *ab = &m;
    printf("\nAddress of pointer ab:0x%X",ab);
    printf("\nContent of pointer ab:%d",*ab);

    m = 34;
    printf("\nAddress of pointer ab:0x%X",ab);
    printf("\nContent of pointer ab:%d",*ab);

    *ab = 7;
    printf("\nAddress of m:0x%X",&m);
    printf("\nValue of m:%d",m);

    return 0;
}
