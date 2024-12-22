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
int main(){
    int i;
    char str[3][20];
    input(str,3);
    for(i=0;i<=2;i++){
        printf("%s ",str[i]);
    }
    printf("\n");
    return 0;
}