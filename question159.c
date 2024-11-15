#include<stdio.h>
void dtoO(int);
int main(){
    dtoO(25);
}
void dtoO(int n){
    if(n>0){
        dtoO(n/8);
        printf("%d",n%8);
    }
}