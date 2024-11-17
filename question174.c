#include<stdio.h>
int main(){
    int arr[10],check;
    printf("Enter 10 numbers: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    check = arr[0];
    for(int i=0;i<=9;i++){
        if(check<arr[i]){
            check=arr[i];
            arr[i]++;
        }
        arr[i]++;
    }
    printf("%d",check);
    return 0;
}