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

     // Method - 2

   printf(year%100?year%4?"Non Leap year":"Leap Year":year%400?"Non Leap Year":"Leap Year");

    return 0;
}
