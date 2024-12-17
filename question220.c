#include<stdio.h>
#include<string.h>
int alphanumeric(char *p);
int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    int res = alphanumeric(str);
    printf("%d",res);
}
int alphanumeric(char *p){
    int i,hasLetter=0,hasDigit=0;
    for(i=0;p[i];i++){
        if((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z')){
            hasLetter = 1;
        }
        if(p[i] >= '0' && p[i] <= '9'){
            hasDigit = 1;
        }
        if(hasLetter && hasDigit){
            return 1;
        }
    }
    return 0;
}