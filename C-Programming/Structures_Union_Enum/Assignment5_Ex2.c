//C program to add two diastances (in inch & feet) system using structures

#include <stdio.h>

struct SDistance
{
    float feet;
    float inch;
};

int main()
{
    struct SDistance first;
    struct SDistance second;
    float tot_feet;
    float tot_inch;
    
    printf("Enter information for first distance \r\n");
    printf("Enter feet:");
    scanf("%f", &first.feet);
    printf("Enter inch:");
    scanf("%f", &first.inch);

    printf("Enter information for second distance \r\n");
    printf("Enter feet:");
    scanf("%f", &second.feet);
    printf("Enter inch:");
    scanf("%f", &second.inch);
    
    tot_feet = first.feet + second.feet;
    tot_inch = first.inch + second.inch;
    if (tot_inch > 12)
    {
        tot_feet += 1;
        tot_inch -= 12;
    }
    
    printf("\r\nSum of distances = %0.f\'\-%.1f\" ",tot_feet,tot_inch);
    

    return 0;
}
