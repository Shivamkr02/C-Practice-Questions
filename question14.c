#include<stdio.h>

int main(){
    int l;
    printf("Enter the length: ");
    scanf("%d",&l);

    int b;
    printf("\nEnter the breadth: ");
    scanf("%d",&b);

    int h;
    printf("\nEnter the height: ");
    scanf("%d",&h);

    int volume=l*b*h;
    printf("Volume of cubiod is %d",volume);

    return 0;
}