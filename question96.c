#include<stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int i;
    for(i=2;i<=n-1;i++){
        if(n%i == 0){
        printf("Given number is Not-Prime");
        break;
        }
    }
    if(i == n){
        printf("Given number is prime");
    }
    return 0;
}