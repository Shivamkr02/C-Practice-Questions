#include<stdio.h>
#include<string.h>
int is_ends_with_string(char str[],char pattern[]){
    int l,i;
    l=strlen(pattern);
    if(strlen(str)>l){
        for(i=strlen(str)-1;i>=strlen(str)-strlen(pattern);i--)
            if(str[i]!=pattern[--l])
                return 0;
            return 1;
    }
    return 0;
}
int main(){
    char email[]="example@gmail.com";
    char p[]="gmail.com";
    if(is_ends_with_string(email,p))
        printf("It is a valid email id");
    else
        printf("It is not a valid email id");
    return 0;
}