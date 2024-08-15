#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);

    float c =2*3.14*r;

    printf("Circumference of circle is %0.2f",c);

    return 0;
}