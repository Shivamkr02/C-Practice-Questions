#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>99 && num<1000){
        printf("Given Number is three digit number");
    }else{
        printf("Given Number is not three digit number");
    }

    return 0;
}