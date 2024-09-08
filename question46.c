#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>=100 && num<=999){
        printf("Number is three digit number");
    }else{
        printf("Number is greater than three digit or number is less than 3-digit");
    }

    return 0;
}