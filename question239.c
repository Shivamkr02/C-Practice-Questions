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
void string_to_words_ends_with(char str[],char w[][20],char ch){
    int wcount,i,j,k;
    wcount  = count_words(str);
    for(i=0,j=0,k=0;str[i];i++,k++){
        if(str[i]!=' ')
            w[j][k]=str[i];
        else{
            if(w[j][k-1]!=ch)
                w[0][k]='\0';
            else
                w[j][k]='\0';
            j++;
            k=-1;
        }
    }
    if(w[j+1][k]!=ch)
        w[0][k]='\0';
    else
        w[j][k]='\0';
}
int main(){
    char str[]="mysirgs education aervices private aimited";
    char w[5][20];
    int i;
    string_to_words_ends_with(str,w,'a');
    for(i=0;i<=4;i++){
        printf("%s\n",w[i]);
    }
}