#include<stdio.h>
int main(){
    int a,b,n = 153;
    while(1){
        a=(n%10)*100;
        b+=a;
    }
    printf("%d",b);
}
