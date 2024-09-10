#include<stdio.h>

int main(){
    int cp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);

    int sp;
    printf("Enter Selling Price: ");
    scanf("%d",&sp);

    float profit = sp-cp;
    float loss = cp-sp;
    float res;

    if(cp<sp){
        res = (profit*100)/cp;
        printf("Profit = %d",profit);
    }
    else{
        res = (loss/cp)*100;
        printf("Loss = %d",loss);
    }
    return 0;
}