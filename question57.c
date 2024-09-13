#include<stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>0){
        printf("Number is Positive number");
    }
    else if(num<0){
        printf("Number is Negative number");
    }
    else if(num == 0){
        printf("Number is zero");
    }
    else{
        printf("Given is not a number");
    }
}