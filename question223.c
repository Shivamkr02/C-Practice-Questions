#include<stdio.h>
#include<string.h>
char* trim(char str[]);
int words(char *p);
int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    int res = words(str);
    printf("%d",res);
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
int words(char *p){
    int i,count=0;
    trim(p);  
    for(i=0;p[i];i++){
        if(p[i]==' ')
        {
            if(p[i]==p[i+1])
                continue;
            else    
                count++;
        }
    }
    return count+1;
}