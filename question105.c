#include<stdio.h>

int main(){

    int i,j,count;


    for(i=1;i<=5;i++){
        count=1;
        for(j=1;j<=5;j++){
            if(i>=j){
                printf("%d ",count);
                count++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}