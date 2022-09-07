//C program to find area of a circle, passing arguments to macros

#include <stdio.h>
#define PI 3.1415
#define area(r) (PI * r * r)

int main()
{
    float radius;
    printf("Enter the radius:");
    scanf("%f", &radius);
    printf("Area = %.2f \r\n", area(radius) );
    

    return 0;
}
