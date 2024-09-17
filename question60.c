#include<stdio.h>

int main(){
    int mon;
    printf("Enter Month number: ");
    scanf("%d",&mon);

    if(mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12){
        printf("Number of days = 31");
    }
    else if(mon == 4 || mon == 6 || mon == 9 || mon == 11){
        printf("Number of days = 30");
    }
    else if(mon == 2){
        printf("Number of days = 28 or 29");
    }

    return 0;
}