#include<stdio.h>
int main(){
    int arr[10],i,avg=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++){
        avg=avg+arr[i]/10;
    }
    printf("%d",avg);
    return 0;
}