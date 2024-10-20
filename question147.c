#include<stdio.h>
void fibonacci_n_terms(int);
int main(){
    fibonacci_n_terms(20);
}
void fibonacci_n_terms(int n){
    int a=-1,b=1,c;
    while(n){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n--;
    }
}