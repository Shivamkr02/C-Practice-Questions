#include<stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int count = 0;

    while(n){
        n = n/10;
        count++;
    }
    printf("%d",count);

    // USING FOR LOOP

    // for(count=0;n;n/=10,++count){
    //     printf("Digits= %d",count);
    // }
    return 0;
}