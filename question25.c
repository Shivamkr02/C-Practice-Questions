#include<stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Unit digit is: %d",x/10);
    return 0;
}