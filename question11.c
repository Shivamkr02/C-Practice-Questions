#include<stdio.h>

int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);

    int b;
    printf("\nEnter the second number: ");
    scanf("%d",&b);

    int c;
    printf("\nEnter the third number: ");
    scanf("%d",&c);

    int avg=(a+b+c)/3;
    printf("Average of three number is %d",avg);
   
    return 0;
}