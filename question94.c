#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    int H;
    for(H=a<b?a:b;H>=1;H--){
        if(a%H==0 && b%H==0)
            break;
    }
    printf("HCF is %d",H);
    return 0;
}