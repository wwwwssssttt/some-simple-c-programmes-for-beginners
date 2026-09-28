#include <stdio.h>
int main()
{
    double number;
    printf("please input the number ");
    scanf("%lf",&number);
    if(number>0){
         printf("The number si positive");
    }
    else if(number<0){
        printf("The number is negative");
    }
    else{
        printf("The number si 0");
    }
    return 0;
}