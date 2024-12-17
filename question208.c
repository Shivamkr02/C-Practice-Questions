#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int alpha_count=0,digit_count=0,other_count=0,i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++){
        switch(str[i]){
            case 'a' ... 'z':
            case 'A' ... 'Z':
                alpha_count++;
                break;
            case '0' ... '9':
                digit_count++;
                break;
            default: 
                other_count++;
        }
    }
    printf("Alphabet Count: %d \n Digit Count: %d \n Other Count: %d",alpha_count,digit_count,other_count);
}