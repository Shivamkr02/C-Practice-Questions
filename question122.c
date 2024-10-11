#include<stdio.h>

int main(){

    int a,b,choice;
            printf("Enter two number: ");
        scanf("%d %d",&a,&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Choose number: ");
    scanf("%d",&choice);
     

    switch (choice)
    {
    case 1:
        printf("Sum of %d and %d is %d",a,b,a+b);
        break;
    case 2:
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;

    case 3:
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;

    case 4:
        printf("Division of %d and %d is %d",a,b,a/b);
        break;

    case 5:
        break;
    default:
        break;
    }
}