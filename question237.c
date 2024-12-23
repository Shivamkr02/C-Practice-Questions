#include<stdio.h>
#include<string.h>
char max_freq_character(char str[][20],int n){
    int f[128]={0};
    int i,j,max,maxIndex;
    for(i=0;i<n;i++){
        for(j=0;str[i][j];j++)
            f[str[i][j]]++;
    }
    max = f[0];
    maxIndex=0;
    for(i=1;i<=127;i++){
        if(max<f[i]){
            max=f[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main(){
    char names[][20]={
        "Amit",
        "Rashmi",
        "Sonal",
        "Arjun",
        "Amit",
        "Sonal",
        "Amit",
    };
    char ch;
    ch = max_freq_character(names,7);
    printf("Max frequency character= %c",ch);
}