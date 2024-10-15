#include<stdio.h>

int naturalNo(int);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int res = naturalNo(n);
}

int  naturalNo(int n){
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
}