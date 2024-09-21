#include<stdio.h>

int main(){
    int a=-1,b=1,c,n;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
        printf("%d  ",c);
    }

    return 0;
}