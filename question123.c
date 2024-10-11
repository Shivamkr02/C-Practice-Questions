#include<stdio.h>

void dayMessage(void);

int main(){
    dayMessage();
}

void dayMessage(){
    int day;
    printf("Enter day number (Mon-1)");
    scanf("%d",&day);

    switch(day){
        case 1:
            printf("Monady is a new beginning");
            break;
        case 2:
            printf("Jai Bajrangbali");
            break;
        case 3:
            printf("Wonderful wednesday");
            break;
        case 4:
            printf("Jio jee bhar ke");
            break;
        case 5:
            printf("Thank God its Friday");
            break;
        case 6:
            printf("Aaj Tel chadhana hai");
            break;
        case 7:
            printf("Hurray! Sunday aa gya");
            break;
        
        default :
            printf("Invalid day no");
            break;

    }
}