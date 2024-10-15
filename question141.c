#include<stdio.h>

int lcm(int a, int b);

int main(){
    int res = lcm(4,5);
    printf("%d",res);
}

int lcm(int a,int b){
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0&&L%b==0)
            return L;
}