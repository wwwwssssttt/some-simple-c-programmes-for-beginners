#include <stdio.h>
int main(){
    while(1){int n,f=1;  
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    printf("%d! = %d\n", n, f);}
    return 0;
}