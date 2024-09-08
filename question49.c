#include<stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    if(year % 100){
        //Non Century year

    if(year % 4){
        printf("Non Leap year");
    }
    else{
        printf("Leap Year");
    }
   }

   else{
        // Century Year
        if(year % 400){
            printf("Non Leap Year");
        }
        else{
            printf("Leap Year");
        }
   }

    return 0;
}