#include<stdio.h>

int main(){
    int x,y,n=0,sum=0,d,p,i;

    for(x=1;x<=10000;x++){
        y=x;
        n=0;
        while(y){
            y=y/10;
            n++;
        }
        for(y=x,sum=0;y;y=y/10){
            d=y%10;
            for(p=1,i=1;i<=n;i++)
                p=p*d;
            sum=sum+p;
        }
        if(sum==x)
            printf("%d ",x);
    }
    printf("\n");
}