#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);

    int c;
    printf("Enter the value of c: ");
    scanf("%d",&c);

    if ((b*b)-4*a*c > 0){
        printf("Roots are real and distinct");
    }
    else if((b*b)-4*a*c == 0)
    {
        printf("Roots are Real and equal");
    }
    else if((b*b)-4*a*c < 0)
    {
        printf("Roots are imaginary roots");
    }
    
    return 0;
}