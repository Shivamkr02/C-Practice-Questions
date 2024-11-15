#include<stdio.h>
int Natural_number(int);
int main(){
    Natural_number(10);
}
int Natural_number(int n){
    if(n>0){
        Natural_number(n-1);
        printf("%d\n",n);
    }
    return 0;
}