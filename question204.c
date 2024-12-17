#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,count;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0,count=0;str[i];i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Number of Spaces is %d",count);
} 