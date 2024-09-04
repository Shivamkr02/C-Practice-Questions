#include<stdio.h>

int main(){
    float inr;
    printf("Enter INR Rupee: ");
    scanf("%f",&inr);

    float doller = 84.23 * inr;
    printf("Doller: %f",doller);

    return 0;
}