#include<stdio.h>
void swap(int a[], int x, int y);
int main(){
    int a[]={5,6,9,7,2,3,4};
    swap(a,3,5);
}
void swap(int a[], int x, int y){
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
    for(int i=0;i<=6;i++){
        printf("%d ",a[i]);
    }
}