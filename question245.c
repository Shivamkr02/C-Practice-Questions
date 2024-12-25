#include<stdio.h>
#include<string.h>
void extrat_string(char *str,int start_index,int end_index,char *result){
    int k=0,count=end_index-start_index;
    for(int i=start_index;i<=end_index;i++){
        result[k]=str[i];
        k++;
    }

    for(int i=0;i<=count;i++){
        printf("%c",result[i]);
    }
}

int main(){
    char str[20];
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    char result[20];
    extrat_string(str,5,11,result);
    return 0;
}