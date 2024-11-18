#include<stdio.h>
int main(){
    int arr[10],max,sec_max;
    printf("Enter 10 numbers: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]){
        max=arr[1];
        sec_max=arr[0];
    }
    else{
        max=arr[0];
        sec_max=arr[1];
    }
    for(int i=2;i<=9;i++){
        if(max<arr[i]){
            sec_max=max;
            max=arr[i];
        }
        else{
            if(arr[i]>sec_max){
                sec_max=arr[i];
            }
        }
    }
    printf("Second largest no is: %d",sec_max);
    return 0;
}