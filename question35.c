#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int append;
    printf("Enter a number to append with number: ");
    scanf("%d",&append);

    int res = (num * 10) + append;
    printf("%d",res);

    return 0;
}