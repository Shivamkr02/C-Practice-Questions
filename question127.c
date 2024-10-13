#include<stdio.h>

int main(){
    printf("1. Factorial Of a number\n");
    printf("2. Check Even or Odd\n");
    printf("3. Area of circle\n");
    printf("4. Sum of first N natural number\n");
    printf("5. Exit\n");

    int choice,x,f;
    printf("Enter your choice number: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d",&x);
        f=1;
        while(x){
            f=f*x;
            x--;
        }
        printf("\nFacorial is %d",f);
        break;

    case 2:
        printf("Enter a number: ");
        scanf("%d",&x);
        if(x%2){
            printf("Odd number");
        }
        else{
            printf("Even number");
        }
        break;

    case 3:
        printf("Enter a number: ");
        scanf("%d",&x);
        f = 2*3.14*x*x;
        printf("\nArea of the circle is: %d",f);
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%d",&x);
        f=0;
        while(x){
          f = f+x;
          x--;  
        }
        printf("\nSum of n natural number is %d",f);
        break;

    case 5:
        break;
    default:
        break;
    }

}