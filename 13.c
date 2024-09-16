#include<stdio.h>

int main(){
    int x,s=0;

    printf("Enter numbers: ");
    while(1){
        scanf("%d",&x);

        if(x==0)
            break;
        s=s+x;
    }
    printf("Sum is %d",s);

    return 0;
}