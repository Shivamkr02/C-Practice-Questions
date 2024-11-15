#include<stdio.h>
void print_odd_reverse(int);
int main(){
    print_odd_reverse(10);
}
void print_odd_reverse(int n){
    if(n>0){       // Base Case
        printf("%d\n",2*n-1);    // Recursive Case
        print_odd_reverse(n-1);
    }
}