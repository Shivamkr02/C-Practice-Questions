#include<stdio.h>
#include<string.h>
int count_words(char str[]){
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]==' '){
            if(str[i]==str[i+1])
                continue;
            else
                count++;
        }
    }
    return count+1; 
}
void string_to_words(char str[],char w[][20]){
    int wcount,i,j,k;
    wcount  = count_words(str);
    for(i=0,j=0,k=0;str[i];i++,k++){
        if(str[i]!=' ')
            w[j][k]=str[i];
        else{
            w[j][k]='\0';
            j++;
            k=-1;
        }
    }
    w[j][k]='\0';
}
int main(){
    char str[]="mysirg education services private limited";
    char w[5][20];
    int i;
    string_to_words(str,w);
    for(i=0;i<=4;i++){
        printf("%s\n",w[i]);
    }
}