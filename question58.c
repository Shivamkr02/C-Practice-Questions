#include<stdio.h>

int main(){
     char alphabet;
    printf("Enter alphabet: ");
    scanf("%c",&alphabet);

    if(alphabet>='a' && alphabet<='z'){
        printf("\nAlphabet is in Lower Case");
    }
    else if(alphabet>='A' && alphabet<='z'){
        printf("\nAlphabet is in Upper Case");
    }
    else if(alphabet>='0' && alphabet<='9'){
        printf("\nCharacter is a Digit");
    }
    else{
        printf("You entered Special character");
    }
    return 0;

}