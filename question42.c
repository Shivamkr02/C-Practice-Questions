#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5){
        printf("Number is divisble by 5");
    }else{
        printf("Number is not divisble by 5");
    }

    return 0;
}