#include<stdio.h>
int main(){
    int num,digit,i,sum=0;
    scanf("%d",&num);       // 145
    int temp = num;         // temp = 145
    while(num>0){
        digit = num%10;     // 541
        int fact = 1;
        for(i=1;i<=digit;i++){
            fact=fact*i;        // 1
        }
        sum=sum+fact;       // sum=145
        num=num/10;
    }
    if(sum==temp)       // 145 == 145
        printf("Strong Number");
    else
        printf("Not Strong Number");
}
