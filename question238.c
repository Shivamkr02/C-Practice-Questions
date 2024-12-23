#include<stdio.h>
#include<string.h>
char* sort(char s[]){
    int r,i;
    char t;
    for(r=1;r<=strlen(s)-1;r++){
        for(i=0;i<=strlen(s)-1-r;i++)
        if(s[i]>s[i+1]){
            t=s[i];
            s[i]=s[i+1];
            s[i+1]=t;
        }
    }
    return s;
}
int is_anagram(char s1[],char s2[]){
    return strcmp(sort(s1), sort(s2))==0;
}
int main(){
    char s1[] = "abc", s2[]= "bca";
    if(is_anagram(s1,s2))
        printf("Anagram");
    else
        printf("not anagram");
    return 0;
}