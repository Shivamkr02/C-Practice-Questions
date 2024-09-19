#include<stdio.h>

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("5 * %d = %d\n",i,5*i);
    }
    return 0;
}