#include<stdio.h>
int smallest_num(int a[]);
int min;
int main(){
    int a[]={50,20,30,80,10,40,60,90,100};
    smallest_num(a);
    printf("Smallest number is: %d",min);
}
int smallest_num(int a[]){
    min=a[0];
    for(int i=0;i<=8;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}