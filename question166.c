#include <stdio.h>
int fact(int);
int main(){
    int a = fact(5);
    printf("%d",a);
}
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}