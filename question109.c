#include<stdio.h>

int main(){
    int i,j,k;

    for(i='A';i<='E';i++){
        k=i;
        for(j='A';j<='E';j++){
            if(i<=j){
                printf("%c ",k);
                k++;
            
            }
            else{
                printf("  ");
            }   
        }
        printf("\n");
    }
}
