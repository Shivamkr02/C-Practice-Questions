#include<stdio.h>
void print_even_number_reverse(int);
int main(){
    print_even_number_reverse(10);
}
void print_even_number_reverse(int n){
    if(n>0){
        printf("%d\n",2*n);
        print_even_number_reverse(n-1);
    }
}