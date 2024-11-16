#include <stdio.h>
int sumDigits(int);
int main(){
    int a=sumDigits(12349);
    printf("%d",a);
}
int sumDigits(int x){
    if(x==0){
        return 0;
    }
    return sumDigits(x/10)+x%10;
}