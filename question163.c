#include<stdio.h>
int sumEvenN(int);
int main(){
    int a = sumEvenN(5);
    printf("%d",a);
}
int sumEvenN(int n){
    if(n==1)
        return 2;
    return 2*n+sumEvenN(n-1);
}