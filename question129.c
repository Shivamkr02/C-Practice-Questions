#include<stdio.h>

int main(){
    char c;
    printf("Enter character: ");
    scanf("%c",&c);

    switch (c)
    {
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    case 97:
    case 101:
    case 105:
    case 111:
    case 117:
        printf("Vowel");
        break;

    case 66 ... 68:
    case 70 ... 72:
    case 74 ... 78:
    case 80 ... 84:
    case 86 ... 90:
    case 98 ... 100:
    case 102 ... 104:
    case 106 ... 110:
    case 112 ... 116:
    case 118 ... 122:
        printf("Consonant");
        break;

    case 32 ... 47:
    case 58 ... 64:
    case 91 ... 96: 
    case 123 ... 126:
        printf("Special character");
        break;


    
    default:
        break;
    }
}