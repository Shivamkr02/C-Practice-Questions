#include<stdio.h>
void print_prime_between(int,int);
int main(){
    print_prime_between(10,20);
}
int is_prime(int n){
    for(int i=2;i<=n-1;i++)
        if(n%i==0)
            return 0;
     return 1;    
}
void print_prime_between(int a,int b){
    int x;
    for(x=a;x<=b;x++)
        if(is_prime(x))
            printf("%d\n",x);
}
