#include<stdio.h>
int countDigits(int);
int main(){
    printf("%d\n",countDigits(24585));
    return 0;
}
 int countDigits(int x){
    if(x==0)
        return 0;
    return countDigits(x/10)+1;
 }
