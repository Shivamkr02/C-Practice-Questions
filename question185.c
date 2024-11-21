#include<stdio.h>
int adjacent_duplicate(int A[],int size);
int main(){
    int A[]={10,56,10,15,15,18,19,78,78};
    printf("%d",adjacent_duplicate(A,9));
}
int adjacent_duplicate(int A[],int size){
    int i;
    for(i=0;i<=size-2;i++){
        if(A[i]==A[i+1])
            return A[i];
    }
     return 0;
}