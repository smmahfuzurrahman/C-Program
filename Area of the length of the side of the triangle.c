#include<stdio.h>
int main (){

double a,b,c,s,area;

printf("Enter Three value: ");

scanf("%lf %lf %lf", &a,&b,&c);

s=(a+b+c)/2;

area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("Are of Triangle= %.2lf", area);
}
