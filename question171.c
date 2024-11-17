#include<stdio.h>
int main(){
    int arr[10],sum=0;
    printf("Enter the values of an array\n");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}