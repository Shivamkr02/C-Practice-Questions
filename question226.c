#include<stdio.h>
#include<string.h>
void print_frequency(char str[]);
int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    print_frequency(str);
}
void print_frequency(char str[]){
    int f[128]={0},i;
    for(i=0;str[i];i++)
        f[str[i]]++;
    for(i=0;i<=127;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
}