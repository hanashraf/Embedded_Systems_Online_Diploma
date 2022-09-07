//C program that adds two complex numbers by passing structure to function

#include <stdio.h>

struct SComplex
{
    float real;
    float imj;
};

struct SComplex calc (struct SComplex first , struct SComplex second )
{
    struct SComplex sum;
    sum.real = first.real + second.real;
    sum.imj = first.imj + second.imj;
    return sum;
}

int main()
{
    struct SComplex first;
    struct SComplex second;
    struct SComplex sum;
    
    printf("For first complex number\r\n");
    printf("Enter real and imaginary respectively :");
    scanf("%f", &first.real);
    scanf("%f", &first.imj);

    printf("For second complex number\r\n");
    printf("Enter real and imaginary respectively :");
    scanf("%f", &second.real);
    scanf("%f", &second.imj);
    
    sum = calc (first , second);
    
    printf("\r\nSum = %.1f\+%.1fi ", sum.real , sum.imj);
    

    return 0;
}
