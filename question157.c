#include<stdio.h>
void print_square_natural(int);
int main(){
    print_square_natural(20);
}
void print_square_natural(int n){
    if(n>0){
        print_square_natural(n-1);
        printf("%d\n",n*n);
    }
}