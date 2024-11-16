#include<stdio.h>
int sumN(int);
int main(){
    int a = sumN(5);
    printf("%d",a); 
}
int sumN(int n){
     if(n==1)
        return 1;
    return n+sumN(n-1);
}