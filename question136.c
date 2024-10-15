#include<stdio.h>

int fact(int);

int main(){
    int res = fact(7);
    printf("%d",res);
}

int fact(int n){
    int res=1;
    for(int i=n;i>=1;i--){
        res = res*i;
    }
    return res;
}