#include <stdio.h>
int main(){
    // int a,b=0;
    // printf("enter a number\n");
    // scanf("%d",&a);
    // do{
    //     a/=10;
    //     b++;
    // }while(a>0);
    // printf("%d",b);
    // int a,b,c,d;
    // printf("enter 3 numbers");
    // scanf("%d %d %d",&a,&b,&c);
    // d=(a+b+c)/3;
    // printf("%d",d);
    int number,sum=0,count=0;
    while(number!=-1){
        printf("enter a number");
        scanf("%d",&number);
        sum=sum+number;
        count++;
    }
    printf("%lf",1.0*sum/count);
    return 0;
}