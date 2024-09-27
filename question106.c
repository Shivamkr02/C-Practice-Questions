#include<stdio.h>

int main(){
    int i,j,k;

    for(i=1;i<=4;i++){
        k=i;
        for(j=1;j<=4;j++){
            if(i>=j){
                printf("%d ",k);
                 k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 