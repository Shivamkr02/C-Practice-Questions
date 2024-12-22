#include<stdio.h>
#include<string.h>
void input(char s[][20],int n){
    int i;
    printf("Enter %d Strings ",n);
    for(i=0;i<n;i++){
        fgets(s[i],20,stdin);
        s[i][strlen(s[i])-1]='\0';
    }
}
void sort(char city[][20],int n){
    int r,i;
    char temp[20];
    for(r=1;r<n;r++){
        for(i=0;i<=n-1-r;i++){
            if(strcmp(city[i],city[i+1])>0){
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);
            }
        }
    }
}
int main(){
    char city[10][20];
    input(city,10);  
    for(int i=0;i<=9;i++){
        printf("%s\n",city[i]);
    }
    sort(city,10);
    for(int i=0;i<=9;i++){
        printf("\n%s",city[i]);
    }
}