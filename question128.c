#include<stdio.h>

int main(){
    char c;
    printf("Enter Character: ");
    scanf("%c",&c);
    switch(c){
        case 65 ... 90:
            printf("\nGiven Character is Uppercase");
            break;

        case 97 ... 122:
            printf("\nGiven character is LowerCase");
            break;

        case 32 ... 47:
        case 58 ... 64:
        case 91 ... 96: 
        case 123 ... 126:
            printf("\nGiven Character is Special character");
            break;

        default:
            break;
        
    }
}