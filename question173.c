#include<stdio.h>
int main(){
    int arr[10],i,sum1=0,sum2=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    printf("Sum of Even number is %d\n",sum1);
    printf("Sum of Odd number is %d",sum2);
    
}