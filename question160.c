#include<stdio.h>
void reverse(int);
int main(){
    reverse(3654);
}
void reverse(int n){
    if(n>0){
        printf("%d",n%10);
        reverse(n/10);
    }
}