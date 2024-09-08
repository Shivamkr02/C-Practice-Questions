#include<stdio.h>

int main(){
    int num1;
    printf("Enter first number: ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second number: ");
    scanf("%d",&num2);

    if(num1>=num2){
        printf("%d is greater than %d",num1,num2);
    }
    else{
        printf("%d is greater than %d",num2,num1);
    }

    return 0;

    // 
}