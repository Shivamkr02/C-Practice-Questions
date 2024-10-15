#include<stdio.h>

int odd(int);
int main(){
    int res = odd(10);

}

int odd(int n){
    for(int i=1;i<=n;i++){
        if(i%2)
            printf("%d\n",i);
    }
}