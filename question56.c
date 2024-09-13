#include<stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num%7 == 0 && num%3==0){
        printf("Given number is divisible by 3 and 7");
    }
    else{
        printf("Given number is not divisible by 3 and 7");
    }
}