#include<stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    int res = (x/10) * 10;
    
    printf("Result: %d",res);

    return 0;
}