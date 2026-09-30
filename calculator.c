#include <stdio.h>
int main()
{
    char s;
    printf("Please choose symbol from+ - * /");
    scanf("%c",&s);
    double n1,n2;
    printf("please input first number");
    scanf("%lf",&n1);
    printf("please input second number");
    scanf("%lf",&n2);

    double result;

    switch(s)
    {
        case '+':
        result=n1+n2;
        break;

        case '-':
        result=n1=n2;
        break;

        case '*':
        result=n1*n2;
        break;
        
        case '/':
        result=n1/n2;
        break;
        
        default:
        printf("invalid symbol");
    }
    printf("result=%.2lf",result);
    return 0;
}