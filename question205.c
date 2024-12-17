#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("Updated String: %s",str);
}