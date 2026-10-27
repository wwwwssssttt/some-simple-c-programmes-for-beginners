#include <stdio.h>
int main() {
    int number,count=2;
    printf("enter a number\n");
    scanf("%d",&number);
    do{
      if(number%count==0){
        break;
      }count++;
    }while(count<number);
    if(count==number){
        printf("the number is prime\n");
    }
    else
    printf("the number is not prime\n");
    return 0;
}