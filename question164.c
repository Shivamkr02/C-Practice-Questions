#include <stdio.h>
int sumSquareN(int);
int main(){
    int a = sumSquareN(10);
    printf("%d",a);
}
int sumSquareN(int n){
    if(n==1)
        return 1;
    return n*n+sumSquareN(n-1);
}