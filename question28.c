#include<stdio.h>

int main(){
   int a;
    printf("Enter the first number: ");
    scanf("%d",&a);

    int b;
    printf("Enter second number: ");
    scanf("%d",&b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("First Number: %d \nSecond Number: %d",a,b);
    return 0;
}
