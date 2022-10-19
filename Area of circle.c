#include<stdio.h>
#include<math.h>
int main ()
{
    float area,radius;

    printf("Enter the value of circle radius: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("Area of Circle: %.5f", area);
}
