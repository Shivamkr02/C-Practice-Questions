#include<stdio.h>

int main(){
    int p;
    printf("Enter the principle: ");
    scanf("%d",&p);

    int r;
    printf("\nEnter the rate: ");
    scanf("%d",&r);

    int t;
    printf("\nEnter the time: ");
    scanf("%d",&t);

    float s_i=(p*r*t)/100;
    printf("Simple interest is %f",s_i);

    return 0;
}