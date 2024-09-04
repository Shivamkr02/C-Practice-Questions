#include<stdio.h>

int main(){
    int a;
    int integer = sizeof(a);
    printf("Size of integer is: %d",integer);

    float b;
    int ft = sizeof(b);
    printf("\nSize of Float is: %d",ft);

    char c;
    int ch = sizeof(c);
    printf("\nSize of Char is: %d",ch);

    double d;
    int db = sizeof(d);
    printf("\nSize of double is: %d",db);

    return 0;

}