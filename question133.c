#include<stdio.h>

int oddEven(int);
int main(){
    int res = oddEven(8);
    printf("%d",res);
}

int oddEven(int n){
    if(n%2==0)
        return 1;
    else    
        return 0;
}