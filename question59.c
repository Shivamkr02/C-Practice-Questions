#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter lengths of the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Triangle");
    else
        printf("Not a valid Triagle");
    
    return 0;
}