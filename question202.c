#include<stdio.h>
int main(){
    char str[10] = {'A','B','N','V','A','B','A','A'};
    int i,check,count=0;
    check = str[0];
    for(i=0;str[i];i++){
        // for(int j=1;str[i];j++){}
        if(check == str[i]){
            count++;
        }
    }
    printf("Occurence of given Character %d",count);
}