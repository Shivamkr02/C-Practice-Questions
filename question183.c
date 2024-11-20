#include<stdio.h>
void sort_array(int a[]);
int main(){
    int a[]={50,20,30,80,10,40,60,90,100};
    sort_array(a);
    //printf("Sorted Array is : %d",min);
}
void sort_array(int a[]){
    for(int r=0;r<=8;r++){
        for(int i=0;i<=8-r;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    for(int i=0;i<=8;i++){
        printf("%d ",a[i]);
    }
}
