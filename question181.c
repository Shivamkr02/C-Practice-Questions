#include<stdio.h>
int greatest_num(int *);
int max;
int main(){
    int a[]={5,67,9,12,65};
    greatest_num(a);
    printf("Greatest number is: %d",max);
}
int greatest_num(int a[]){
    max=a[0];
    for(int i=0;i<=4;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}