#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter Base:");
    scanf("%f", &base);

    printf("Enter Height:");
    scanf("%f", &height);

    area = 0.5 * base * height;
    printf("The Triangle Area is: %.1f", area);

    return 0;
}
