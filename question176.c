#include<stdio.h>
int main(){
    int arr[10],r,i;
    printf("Enter 10 numbers");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(r=1;r<=9;r++){
    for(i=0;i<=9-r;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
           for(int i=0;i<=9;i++){
            printf("%d\n",arr[i]);
    }
 
}