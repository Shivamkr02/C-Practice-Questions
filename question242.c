#include<stdio.h>
#include<string.h>
int search_all_occurences(char *str,char ch,int *arr){
    int k=0;
    for(int i=0;str[i];i++){
        if(ch == str[i]){
            arr[k]=i;
            k++;
        }
    }
    return k;
}
int main(){
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")] = '\0';
    char ch;
    printf("Enter character to search: ");
    scanf("%c",&ch);
    int arr[20];
    int count = search_all_occurences(str,ch,arr);
    if(count>0){
        printf("Character %c found at indicies: ",ch);
        for(int i=0;i<count;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    } else {
        printf("Character %c not found in the string. \n",ch);
    }

}