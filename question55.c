#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%3==0 && num%2==0){
        printf("Given number is divisible by 3 and 2");
    }
    else{
        printf("Given number is not divisible by 3 and 2");
    }
    return 0;
}