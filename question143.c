#include<stdio.h>

int is_prime(int n);

int main(){
    int res = is_prime(8);
    printf("%d",res);
}

int is_prime(int n){
    for(int i=2;i<=n-1;i++)
        if(n%i==0)
            return 0;
     return 1;    
}