#include <stdio.h>
int main()
{
    int num;
    printf("please input the number ");
    scanf("%d",&num);
    (num%2==0)?(printf("The number is even")):(printf("The number is odd"));
    return 0;
}