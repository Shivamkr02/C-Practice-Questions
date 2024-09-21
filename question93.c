#include<stdio.h>

int main(){
    int a=-1,b=1,c,x;

    printf("Enter a number");
    scanf("%d",&x);

    for(int i=0; ;i++){
        c=a+b;
        if(c==x){
            printf("%d is %d term in the series",x,i);
            break;
        }
        if(c>x){
            printf("%d is not in the series",x);
            break;
        }
        a=b;
        b=c;
    } 
}