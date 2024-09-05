#include<stdio.h>

int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);

    int b;
    printf("Enter second number: ");
    scanf("%d",&b);


    a = a^b;
    b = a^b;
    a= a^b;
    a = a^b^b;
    b = a^b^a;

    printf("First number: %d \nSecond number: %d",a,b);

    return 0;
}