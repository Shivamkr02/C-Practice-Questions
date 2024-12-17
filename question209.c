#include<stdio.h>
#include<string.h>
int main(){
    char str[50],str_cpy[50];
    int i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++){
        str_cpy[i] = str[i];
    }
    str_cpy[i]='\0';
    printf("%s",str_cpy);
}