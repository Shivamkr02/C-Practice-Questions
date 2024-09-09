#include<stdio.h>

int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);

    int b;
    printf("Enter second number: ");
    scanf("%d",&b);

    int c;
    printf("Enter third number: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else{
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
    
    
    return 0;
}