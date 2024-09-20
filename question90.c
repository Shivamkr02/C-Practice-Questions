#include<stdio.h>

int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);

    int y=0;

    while(x){
        y=y*10+x%10;
        x=x/10;
    }
    printf("%d",y);

    return 0;
}