#include<stdio.h>
#include<string.h>
char* trim(char str[]);
int main(){
    int str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    printf("Length before trimming: %d",strlen(str));
    printf("\n%s",trim(str));
    printf("\nLength after trimming: %d",strlen(str));
    return 0;
}
char* trim(char str[]){
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
        count++;
    k = strlen(str);
    while(str[i]==' ')
        i++;
    for(j=0;str[j+i];j++)
        str[j]=str[i+j];
    str[j]=str[i+j];
    str[k-count-i] = '\0';
    return str;
}
