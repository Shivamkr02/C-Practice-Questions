#include<stdio.h>
#include<string.h>
int length(char *p);
int palindrome(char *p);
int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    int res = palindrome(str);
    printf("%d",res);
}
int length(char *p){
    int i;
    for(i=0;p[i];i++);
    return i;
}
int palindrome(char *p){
    int len = length(p);
    int start=0,end=len-1;
    while(start<end){
        if(p[start] == p[end]){
            return 1;
        }
        else{
            return 0;
        }
    }
}