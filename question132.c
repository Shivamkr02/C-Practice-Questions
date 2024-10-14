#include<stdio.h>

float simple(float,float,float);
int main(){
    
    float ans = simple(50000,7,5);
    printf("%.2f",ans);
}

float simple(float p, float r, float t){
    return (p*r*t)/100;
}