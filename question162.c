#include <stdio.h>
int sumOddN(int);
int main(){
    int a = sumOddN(5);
    printf("%d",a);
}
int sumOddN(int n){
    if(n==1)
        return 1;
    return 2*n-1 +sumOddN(n-1);
}