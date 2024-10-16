#include<stdio.h>

int next_prime(int);
int is_prime(int);
int main(){
    int res = next_prime(13);
    printf("%d",res);
}

int next_prime(int n){
    while(!is_prime(++n));
    return n;
}

int is_prime(int n){
    for(int i=2;i<=n-1;i++)
        if(n%i==0)
            return 0;
     return 1;    
}