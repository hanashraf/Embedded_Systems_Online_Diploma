/*Write a program in C to print all the alphabets using a pointer. Go
to the editor*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char start = 'A';
    char *start_ptr = &start;
    do
    {
        printf("%c\t",(*start_ptr));
        start++;
    }
    while(start <= 'Z');

    return 0;
}
