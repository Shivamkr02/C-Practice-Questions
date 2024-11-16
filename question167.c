#include <stdio.h>
int hcf(int a,int b);
int main(){
    printf("HCF is %d",hcf(270,70));
    printf("\n");
    return 0;
}
int hcf(int a,int b){
    if(a>b){
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    }
    else{
        if(b%a==0)
            return a;
        else
            return hcf(a,b%a);
    }
}