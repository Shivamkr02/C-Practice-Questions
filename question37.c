#include<stdio.h>

int main(){
    int num;

    printf("Enter three digit number: ");

    scanf("%d",&num);

    int mod = num % 10 * 100;

    int div = num / 10;

    int res = mod + div;
    printf("%d",res);

    

    return 0;
}