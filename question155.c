#include<stdio.h>
void print_even_number(int);
int main(){
    print_even_number(10);
}
void print_even_number(int n){
    if(n>0){
        print_even_number(n-1);
        printf("%d\n",2*n);
    }
}
