#include <stdio.h>
int fib(int);
void printFib(int);
int main (){
    printFib(15);
    printf("\n");
    return 0;
}
int fib(int n){
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n){
    if(n==0)
        printf("%d ",n);
    else{
        printFib(n-1);
        printf("%d ",fib(n));
    }
}