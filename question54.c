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
    else{
        printf("Not an alphabet");
    }
    return 0;
}