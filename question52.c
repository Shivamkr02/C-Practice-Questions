#include<stdio.h>

int main(){
    float cp;
    printf("Enter Cost Price: ");
    scanf("%f",&cp);

    float sp;
    printf("Enter Selling Price: ");
    scanf("%f",&sp);

    float profit = sp-cp;
    float loss = cp-sp;
    int profitPer;
    int lossPer;

    if(cp<sp){
        profitPer = (profit/cp)*100;
        printf("Profit Percentage = %d ",profitPer);
    }
    else{
        lossPer = (loss/cp)*100;
        printf("Loss Percentage = %d ",lossPer);
    }
    return 0;
}
