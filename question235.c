#include<stdio.h>
#include<string.h>
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
void remove_duplicate(char names[][20],int n){
    int i;
    sort(names,n);
    for(i=n-2;i>=0;i--){
        if(strcmp(names[i],names[i+1]) == 0)
            names[i+1][0]='\0';
    }
    sort(names,n);
}
//  0     1    2    3     4     5     6
// Amit Amit Amit Arjun Rashmi Sonal Sonal
int main(){
    int i;
    char names[][20]={
        "Amit",
        "Rashmi",
        "Sonal",
        "Arjun",
        "Amit",
        "Sonal",
        "Amit",
    };
    remove_duplicate(names,7);
    for(i=0;i<=6;i++)
        printf("%s\n",names[i]);
}