#include<stdio.h>
#include<string.h>
int main(){
    char str[50],ch;
    int i,l;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++){
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("Reverse String is %s",str);
}