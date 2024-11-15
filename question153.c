#include<stdio.h>
void print_odd_number(int);
int main(){
    print_odd_number(10);
}
void print_odd_number(int n){
    if(n>0){                // Base Case
        print_odd_number(n-1);     // Recursive Case
        printf("%d\n",2*n-1);
    }
}