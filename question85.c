#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum = 0;
    int square;

    for(int i=1;i<=n;i++){
        square = i*i*i;
            sum = sum + square;
    }
    printf("%d",sum);

}