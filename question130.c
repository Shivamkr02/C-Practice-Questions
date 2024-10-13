#include<stdio.h>
#include <stdlib.h>

int main(){
    printf("1. Calculate LCM of two numbers\n");
    printf("2. Calculate sum of two numbers\n");
    printf("3. Volume of cubiod\n");
    printf("4. Exit\n");

    int choice,a,b,L;
    printf("Enter number: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbera: ");
        scanf("%d%d",&a,&b);
        for(L=a>b?a:b;L<=a*b;L++){
            if(L%a==0 && L%b==0){
                printf("LCM is %d",L);
                break;
            }
        }
        break;

    case 2:
        printf("Enter number: ");
        scanf("%d",&a);
        b=0;
        while(a){
            b=b+a%10;
            a/=10;
        }
        printf("Sum is %d",b);
        break;

    case 3:
        printf("Enter length width and height: ");
        scanf("%d%d%d",&a,&b,&L);
        printf("\nVolume of cubiod is: %d",a*b*L);
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%d",&a);
        for(b=2;b<a;b++)
            if(a%b==0)
                break;
            if(a==b)
                printf("%d is a prime");
            else
                printf("%d is not a prime");
        break;

    case 5:
        exit(0);
    
    default:
        printf("\nInvalid Choice");
        break;
    }
}