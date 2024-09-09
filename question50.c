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

      // Method - 2

    printf("%d",a>b?a>c?a:c:b>c?b:c);
    
    
    return 0;
}
