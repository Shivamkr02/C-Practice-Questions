#include<stdio.h>
#include<string.h>
int count_vowels(char str[]){
    char v[]="aeiouAEIOU0";
    int i,j,count=0;
    for(i=0;str[i];i++){
        for(j=0;v[j];j++){
            if(str[i]==v[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    char str[5][20];
    for(int i=0;i<=4;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
    for(int i=0;i<=4;i++){
        printf("%s | vowels = %d\n",str[i],count_vowels(str[i]));
    }
    return 0;
}