#include<stdio.h>
int main ()
{
    float length, width , area;

    printf("Enter the value of length: ");
    scanf("%f",&length);

    printf("Enter the value of Width: ");
    scanf("%f", &width);

    area = length * width;
    printf("Area of Rectangle: %.2f\n",area);

}
