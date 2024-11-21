#include<stdio.h>
void rotate(int A[],int size,int n,int d);
int main(){
    int A[]={32,39,40,12,70};
    rotate(A,5,2,1);
}
void rotate(int A[],int size,int n,int d){
    int i,temp;
    if(d==1){
        while(n){
            temp=A[size-1];
            for(i=size-2;i>=0;i--)
                A[i+1]=A[i];
            A[0]=temp;
            n--;
        }
    }
    else{
        while(n){
            temp=A[0];
            for(i=1;i<=size-1;i++)
                A[i-1]=A[i];
            A[size-1]=temp;
            n--;
        }
    }
    for(int i=0;i<=4;i++){
        printf("%d ",A[i]);
    }
}