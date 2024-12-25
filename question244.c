#include<stdio.h>
#include<string.h>
void uppercase(char *str){
    for(int i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }
    }
    printf("%s",str);
}
int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    uppercase(str);
    return 0;
}