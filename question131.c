#include<stdio.h>

float area(float);
int main(){
    float ar = area(2);
    printf("%.3f",ar);
}

float area(float r){
    return 3.14*r*r;
}