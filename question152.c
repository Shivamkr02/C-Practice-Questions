#include<stdio.h>
void print_reverse_n(int n);
int main(){
    print_reverse_n(10);
}
void print_reverse_n(int n){
    if(n>0){
        printf("%d\n",n);
        print_reverse_n(n-1);
    }
}