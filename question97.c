#include<stdio.h>

int main(){


    int l,u,x,i;
    printf("Enter lower limit number: ");
    scanf("%d",&l);

    printf("Enter upper limit number: ");
    scanf("%d",&u);


    for(x=l;x<=u;x++){

        for(i=2;i<x;i++)
            if(x%i==0)
                break;

        if(i==x)
            printf("%d\n",x);

    }
    return 0;
}