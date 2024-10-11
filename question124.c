#include<stdio.h>

int main(){
    int l,b,h,choice;
    printf("Enter the length breadth and height of the triangle: ");
    scanf("%d%d%d",&l,&b,&h);

    printf("1. Check Isosceles triangle\n");
    printf("2. Check right angled triangle\n");
    printf("3. Check equilateral triangle\n");
    printf("4. Exit\n");

    printf("Enter a number (1-4)");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        if(l==b || b==h || l==h){
            printf("Isosceles triangle");
        }
        break;

    case 2: 
        if ((l*l) + (b*b == (h*h)))
        {
            printf("Right angled triangled");
        }
        break;

    case 3: 
        if ( l== b == h)
        {
            printf("Equilateral triangle");
        }
    
    default:
        break;
    }
}