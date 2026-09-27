// This code was ritten by wwwwssssttt.
#include <stdio.h>
int main()
{   double h,w;
    printf("input your height(m) and weight(kg):");
    scanf("%lf %lf",&h,&w);
    double result=w/(h*h);
    printf("your BMI is %.2lf",result);
    return 0;
}