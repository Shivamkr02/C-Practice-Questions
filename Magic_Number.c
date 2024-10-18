#include<stdio.h>
int main(){
    int num,sum=0,rev;
    scanf("%d",&num);   // 1729
    int copy = num;     // copy = 1729
    while(num>0){
        sum = sum+(num%10);     // sum = 19
        num=num/10;
    }
    int temp = sum;     // temp = 19
    while(sum>0){
        rev = rev*10+(sum%10);  // rev = 91
        sum=sum/10;     // 10
    }
    if(temp*rev==copy)      // 1729 == 1729
        printf("Magic Number");
    else
        printf("Not Magic Number");
}