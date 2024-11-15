#include <stdio.h>
void dtob(int);
int main(){
    dtob(11);
}
void dtob(int n){
    if(n>0){
        dtob(n/2);
        printf("%d",n%2);
    }
}