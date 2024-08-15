#include<stdio.h>

int main(){
    int cp;
    printf("Enter the cost price: \n");
    scanf("%d",&cp);

    int sp;
    printf("Enter the selling price: \n");
    scanf("%d",&sp);

    int profit =(sp/12 - cp/12)*25;

    printf("Profit is %d",profit);

    return 0;
}