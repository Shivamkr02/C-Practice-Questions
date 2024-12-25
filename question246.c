#include<stdio.h>
#include<string.h>
void swap(char *str1, char *str2) {
    char temp;
    int i = 0;

    // Swap characters until one string ends
    while (str1[i] != '\0' || str2[i] != '\0') {
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
        i++;
    }
}
int main(){
    char str1[20],str2[20];
    printf("Enter a string: ");
    fgets(str1,20,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    printf("Enter another string: ");
    fgets(str2,20,stdin);
    str2[strcspn(str2,"\n")] = '\0';
    swap(str1,str2);
    printf("str1 = %s \n str2 = %s",str1,str2);
}