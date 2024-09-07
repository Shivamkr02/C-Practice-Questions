#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2){
        printf("Number is Even Number");
    }else{
        printf("Number is Odd Number");
    }
    return 0;
}