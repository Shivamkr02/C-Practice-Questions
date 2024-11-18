#include<stdio.h>
int main(){
    int a[10],min,sec_min;
    printf("Enter 10 numbers: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    if(a[0]<a[1]){
        min=a[0];
        sec_min=a[1];
    }
    else{
        min=a[1];
        sec_min=a[0];
    }
    for(int i=2;i<=9;i++){
        if(min>a[i]){
            sec_min=min;
            min=a[i];
        }
        else{
            if(sec_min>a[i]){
                sec_min=a[i];
            }
        }
    }
    printf("Second smallest number is: %d",sec_min);
    return 0;
}