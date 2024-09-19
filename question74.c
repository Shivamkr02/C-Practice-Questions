#include<stdio.h>

int main(){

    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2)
            printf("%d\n",i);
    }
    return 0;
}