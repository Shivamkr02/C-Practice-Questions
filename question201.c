#include<stdio.h>
int main(){
    char str[10] = {'S','H','I','V','A','M'};
    int i;
    for(i=0;str[i];i++);
    printf("Length of the String is %d",i);
}