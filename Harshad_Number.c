#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    int original_number=21;   //  21
    while(num>0)    //  21>0  //  2>0  // 0>0
    {
        sum = sum + (num%10); //sum=3
        num = num/10;   // 0
    }
    (original_number%sum==0)?printf("Harshad Number"):printf("Not Harshad Number");
}
