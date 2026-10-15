#include<stdio.h>
int main(){
    int answer=89,guess;
    printf("Please guess a number");
    while(guess!=answer){
        scanf("%d",&guess);
        if(guess>answer){
            printf("too big,please try again");
        }
        else if(guess<answer){
            printf("too small,please try again");
        }
        else{
            printf("yes!you are right !");
        }
    }
    return 0;
}
